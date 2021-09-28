// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
using namespace std;
//using namespace atcoder;
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
struct myComp {
    constexpr bool operator()(
        pair<ll, ll> const& a,
        pair<ll, ll> const& b)
        const noexcept
    {
        return a.first < b.first;
    }
};
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, myComp> q;
        rep(i,n) if(v[i]!=0) q.push(P(v[i],i+1));
        P a=P(0,0);
        P b=P(0,0);
        vector<ll> aq;
        vector<ll> bq;
        while(!q.empty()){
            if(q.top().first==0) {
                q.pop();
            }else if(a.first==0){
                a=q.top();
                q.pop();
            }else if(b.first==0){
                b=q.top();
                q.pop();
            }else{
                a.first--;
                b.first--;
                aq.push_back(a.second);
                bq.push_back(b.second);
                q.push(a);
                q.push(b);
                a=P(0,0);
                b=P(0,0);
            }
        }
        while(a.first>0&&b.first>0){
                a.first--;
                b.first--;
                aq.push_back(a.second);
                bq.push_back(b.second);
        }
        cout<<bq.size()<<endl;
        rep(i,bq.size()) cout<<bq[i]<<" "<<aq[i]<<endl;
    }


    return 0;
}
