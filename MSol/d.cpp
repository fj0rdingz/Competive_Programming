// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
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
    m=1000;
    a=0;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    rep(i,n)   cin >> v[i];
    rep(i,n){
        //cout<<v[i]<<"m="<<m<<" to be";
        if(v[i]<=mini){
            mini=v[i];
            //continue;
        }else{
            //決済
            if(i==n-1||v[i+1]<=v[i]){
                a=m/mini;
                m=m%mini;
                m+=a*v[i];
                mini=INF;
            }
        }
        //cout<<m<<endl;
    }
    cout<<m<<endl;

    return 0;
}
