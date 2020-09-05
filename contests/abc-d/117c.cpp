// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

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

    ll n,m,sum=0;
    string str;
    cin>>m>>n;;
    vector<ll> v(n);
    vector<ll> w(n-1);
    rep(i,n)   cin >> v[i];
    sort(v.begin(),v.end());
    rep(i,n-1) w[i]=v[i+1]-v[i];
    sort(w.begin(),w.end());
    rep(i,n-m) sum+=w[i];
    cout<<sum<<endl;

    return 0;
}
