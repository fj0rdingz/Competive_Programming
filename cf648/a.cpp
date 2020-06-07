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
    ll _;
    cin>>_;
    rep(_s,_){
        cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll> (m));
        //vector<ll> v(n);
        rep(i,n)rep(j,m)   cin >> v[i][j];
        ll yoko=0;
        rep(i,n){
            f=1;
            rep(j,m){
                if(v[i][j]==1) f=0;
            }
            if(f) yoko++;
        }
        ll tate=0;
        rep(j,m){
            f=1;
            rep(i,n){
                if(v[i][j]==1) f=0;
            }
            if(f) tate++;
        }
        ll te=min(tate,yoko);
        if(te%2){
            cout<<"Ashish"<<endl;

        }else{
            cout<<"Vivek"<<endl;

        }
    }

    return 0;
}
