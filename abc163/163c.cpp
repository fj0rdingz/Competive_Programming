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
    vector<int> a(n);
    vector<int> b(n+1);
    rep(i,n-1)   cin >> a[i];
    rep(i,n) b[a[i]]++;
    rep(i,n+1){
        if(i==0) continue;
        cout<<b[i]<<endl;
    }

    return 0;
}