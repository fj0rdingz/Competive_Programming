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
    cin>>n>>a;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<double> v(n);
    vector<double> w(n);
    rep(i,n)   cin >> v[i]>>w[i];
    rep(i,n){
        //cout<<sqrt(v[i]*v[i]+w[i]*w[i])<<endl;
        if(sqrt(v[i]*v[i]+w[i]*w[i])<=a) sum++;
    }
    cout<<sum<<endl;

    return 0;
}
