#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll k,l,m,n,w,x,y,z,p,q,tmp;
    string str;
    cin>>n>>m;
    ll a[n+5][m+5];
    vector<ll> sum(m);
    rep(i,n)rep(j,m) cin>>a[i][j];
    rep(i,n)rep(j,m) sum[j]+=a[i][j];
    sort(sum.begin(),sum.end());

    rep(i,m) cout<<sum[i]<<" ";
    cout<<endl;
    cout<<sum[m-1]+sum[m-2]<<endl;
    return 0;
}