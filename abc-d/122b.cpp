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
    cin>>str;
    ll maxx=0;
    rep(i,str.length()){
        if(str[i]=='A'||str[i]=='C'||str[i]=='G'||str[i]=='T'){
            sum++;
            maxx=max(sum,maxx);
        }else{
            sum=0;
        }
    }
    cout<<maxx<<endl;
    return 0;
}