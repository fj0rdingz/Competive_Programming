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
    ll f;
    string str;
    string temp;
    cin>>str;
    rep(i,str.length()){
        for(j=i+3;j<str.length()+1;j++){
            temp=str.substr(i,j-i);
            long double d=stold(temp);
            d=fmod(d,2019);
            if(d<=1) f=0;
            else f=1;
            if(f==0) {
                sum++;
//                cout<<i<<" "<<j<<" "<<d<<endl;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}