// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001000000
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
struct R{
    ll num;
    ll y;
    ll n;
};



int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>a;
    rep(_,a){
        cin>>n;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<R> v(n);
        rep(i,n)   cin >> v[i].num>>v[i].y>>v[i].n;
        ll lb=0;
        ll ub=INF;
        rep(hoge,100){
            f=0;
            ll mid=(lb+ub)/2;
            
            //成立したらf=1にする
            if(f) lb=mid;
            else ub=mid;
        }
    }


    return 0;
}
