// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str,str1;
    cin>>str>>str1;
    f=1;
    if(str.length()+1==str1.length()) {
        rep(i,str.length()) if(str[i]!=str1[i])  f=0;
    }
    else f=0;
    if(f==1) Yes;
    else No;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));



    return 0;
}
