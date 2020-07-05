
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
    rep(i,n){
        cin>>a>>b;
        maxi=max(a,b);
        mini=min(a,b);
        if(mini*2>maxi) cout<<mini*2*mini*2<<endl;
        else cout<<maxi*maxi<<endl;

        maxi=0;
        mini=INF;
    }
    return 0;
}
