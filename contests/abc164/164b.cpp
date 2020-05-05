// lcm、__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
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
    cin>>w>>x>>y>>z;
    while(1){
        y-=x;
        if(y<=0){
            cout<<"Yes"<<endl;
            return 0;
        }
        w-=z;
        if(w<=0){
            cout<<"No"<<endl;
            return 0;
        }
    }

    return 0;
}