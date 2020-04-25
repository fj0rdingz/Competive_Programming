#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp=0,sum=0;
    string str;
    cin>>n;
    for(i=1;i<=n;i++){
    if(i%2==0) continue;

        for(j=1;j<=n;j++){
            if(i%j==0) tmp++;
        }
        if(tmp==8) sum++;
        tmp=0;
    }
    cout<<sum<<endl;
    return 0;
}