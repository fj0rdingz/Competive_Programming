// lcm、__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,maxi=0,f=0,mini=1e10,sum=0;
    string str;
    ll cnt=0;
    ll a,b;
    cin>>a>>b;
    if(a*b%2){
        sum++;
    }
    if(a==1||b==1){
        cout<<1<<endl;
        return 0;
    }
    cout<<a*b/2+sum;
    return 0;
}