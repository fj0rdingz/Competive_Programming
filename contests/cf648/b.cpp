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
    cin>>a;
    rep(_,a){
        cin>>n;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        vector<ll> w(n);
        rep(i,n)   cin >> v[i];
        rep(i,n)   cin >> w[i];
        f=0;
        rep(i,n-1){
            if(w[i]!=w[i+1]) f=1;
        }
        b=0;
        if(f!=1){
            rep(i,n-1){
                if(v[i]>v[i+1]) b=1;
            }
        }
        if(f==1||b==0){
            Yes;
        }
        else{
            No;
        }

    }
    return 0;
}
