#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    string str;
    cin>>n>>m;
    vector<int> a(m);
    rep(i,m)   cin >> a[i];
    rep(i,m) n-=a[i];
    if(n<0) cout<<"-1"<<endl;
    else cout<<n<<endl;

    return 0;
}