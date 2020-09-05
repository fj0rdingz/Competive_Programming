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
    n=1,x=1;
    while(1){
    cin>>n>>x;
    if(n==0&&x==0) return 0;
    REP(i,1,n-1){
        REP(j,i+1,n){
            REP(k,j+1,n+1){
                if(i+j+k==x) sum++;
        
    } 
    }
    }
    cout<<sum<<endl;
    sum=0;
    }

    return 0;
}