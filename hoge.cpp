// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 9223372036854775807
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
ll mini=INF;
using ipair = pair<ll,ll>;
bool operator>(const ipair a,const ipair b){return a.first > b.first;};//演算子オーバーロード

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll t;
    ll c;
    cin>>t;
    priority_queue<ipair,vector<ipair>,greater<ipair>> q;
    ipair p;
    rep(_,t){
        cin>>n>>a>>b>>c>>d;
        mini=d*n;
        if(d*n>INF) mini=INF;
        q.push(make_pair(0,n));
        q.push(make_pair(d,n+1));
        q.push(make_pair(2*d,n+2));
        q.push(make_pair(3*d,n+3));
        q.push(make_pair(4*d,n+4));
        q.push(make_pair(5*d,n+5));
        q.push(make_pair(d,n-1));
        q.push(make_pair(2*d,n-2));
        q.push(make_pair(3*d,n-3));
        q.push(make_pair(4*d,n-4));
        q.push(make_pair(5*d,n-5));
        set<ll> sch;
        while(1){
            p=q.top();
            q.pop();
            if(sch.find(p.second)!=sch.end()) continue;
            sch.insert(p.second);
            //cout<<p.first<<" "<<p.second<<endl;
            if(p.second==0){
                while(!q.empty()) q.pop();
                if(p.second==0)cout<<p.first<<endl;
                else cout<<p.first+d*p.second<<endl;
                break;
            }
            if(p.second%2==0&&sch.find(p.second/2)==sch.end()) {
                for(ll i=-7;i<=7;i++){
                    q.push(make_pair(p.first+a+d*i,p.second/2+d));                
                }
                }
            if(p.second%3==0&&sch.find(p.second/3)==sch.end()) {
                for(ll i=-7;i<=7;i++){
                    q.push(make_pair(p.first+b+d*i,p.second/3+d));                
                }
                }
            if(p.second%5==0&&sch.find(p.second/5)==sch.end()) {
                for(ll i=-7;i<=7;i++){
                    q.push(make_pair(p.first+c+d*i,p.second/5+d));                
                }
                }
            //if(f==0||p.second<10){
            //q.push(make_pair(p.first+d,p.second-1));
            //if(p.first<n+30)q.push(make_pair(p.first+d,p.second+1));
            //}
            f=0;
        }
        //cout<<sum<<endl;
    }

    return 0;
}
