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

    ll a,b,c,d,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    map<ll,ll> m;
    for(ll i=1;i<=100;i++){
        for(ll j=1;j<=100;j++){
            for(ll k=1;k<=100;k++){
                m[i*i+j*j+k*k+i*j+j*k+i*k]++;
                }
            }
        }
    for(ll i=1;i<=n;i++){
        cout<<m[i]<<endl;
    }

    return 0;
}
