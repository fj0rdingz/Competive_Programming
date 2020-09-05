// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    a=0;
    b=0;
    c=0;
    d=0;
    rep(i,n){
        cin>>str;
        if(str=="AC") a++;
        if(str=="WA") b++;
        if(str=="TLE") c++;
        if(str=="RE") d++;
    }
    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<b<<endl;
    cout<<"TLE x "<<c<<endl;
    cout<<"RE x "<<d<<endl;

    return 0;
}
