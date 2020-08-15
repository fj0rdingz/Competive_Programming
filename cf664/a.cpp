// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    ll v[n];
    ll w[m];
    rep(i,n) cin>>v[i];
    rep(i,m) cin>>w[i];
    vector<ll> ans(m);
    vector<ll> ans2(n);
    rep(j,m){
        rep(i,n){
            ans[j]|=v[i]&w[j];
        }
    }
    rep(j,m){
        rep(i,n){
            ans2[i]|=v[i]&w[j];
        }
    }
    rep(i,n) cout<<ans2[i]<<" ";
    ln;
    cout<<*min_element(all(ans))<<endl;
    
    return 0;
}
