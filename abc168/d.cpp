// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;
ll n,m;




//注意

vector<set<ll>> s(300000);
vector<pair<ll ,bool>> f(3000000);
deque<ll> q;


void search(){
    if(q.size()==0) return;
    ll num=q.front();
    q.pop_front();
    //if(f[num].second==true) return;
    //cout<<"num= "<<num<<" ";
    for(auto itr=s[num].begin();itr!=s[num].end();++itr){
        //cout<<*itr<<" ";
        if(f[*itr].second==false){
            f[*itr].second=true;
            f[*itr].first=num;
            q.push_back(*itr);
        }
    }
   // cout<<endl;
    search();
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll c,d,maxi=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    vector<ll> a(m);
    vector<ll> b(m);
    s.resize(n);
    f.resize(n);
    rep(i,n) f[i].second=false;
    rep(i,m){
        cin>>c>>d;
        c--;
        d--;
        s[c].insert(d);
        s[d].insert(c);
    }
    q.push_back(0);
    search();
    ll flag=1;
    rep(i,n){
        if(f[i].second==false) flag=0;
    }
    if(flag==0) No;
    else{
        Yes;
        for(ll i=1;i<n;i++){
            cout<<f[i].first+1<<endl;
        }
    }

    return 0;
}
