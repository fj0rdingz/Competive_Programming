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
    cin>>n;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    rep(i,n)   cin >> a[i];
        n++;
    rep(i,n){
        b[a[i]]++;
    }
    ll total=0;
    rep(i,n){
        if(b[i]==0||b[i]==1) continue;
        total+=b[i]*(b[i]-1)/2;
    }
    rep(i,n-1){
        if(b[a[i]]!=0||b[a[i]]!=1)cout<<total-b[a[i]]+1<<endl;
        else cout<<total<<endl;
    }

    return 0;
}
