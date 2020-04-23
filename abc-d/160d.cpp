#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    ll a[100000];
    string str;
    cin>>n>>x>>y;;
    x--;
    y--;
    rep(i,n-1){
        REP(j,i+1,n){
            a[min(j-i,abs(j-y)+1+abs(x-i))]++;
            //cout<<i<<" "<<j<<" "<<min(j-i,abs(j-y)+1+abs(x-i))<<endl;
        }
    }
    rep(i,n){
        if(i==0) continue;
        cout<<a[i]<<endl;
    }

    return 0;
}