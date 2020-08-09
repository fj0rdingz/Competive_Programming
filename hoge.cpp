// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,n,maxi=0,f=0,mini=INF,sum=0;
    cin>>n;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    map<ll,ll> m;
    set<ll> s;
    rep(i,n) s.insert(v[i]);
    vector<ll> w;
    for(auto itr=s.begin();itr!=s.end();++itr){
        w.push_back(*itr);
    }
    sort(all(w));
    //pair<ll,ll> p(w.size);
    rep(i,w.size()){
        m[w[i]]=i;
    }
    rep(i,n){
        cout<<m[v[i]]<<endl;
    }
    return 0;
}
