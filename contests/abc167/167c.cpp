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
    ll x;
    string str;
    cin>>n>>m>>x;
    vector<vector<ll>> v(n,vector<ll> (m));
    vector<ll> cost(n);
    rep(i,n){
        cin>>cost[i];
        rep(j,m){
            cin >> v[i][j];
        }
    }
    for (int bit = 0; bit < (1 << n); ++bit) {
        int sum[m];
        ll karisum=0;

        rep(i,m) sum[i]=0;
        for (int i = 0; i < n; ++i) {
            if (bit & (1 << i)) {
                rep(j,m){
                sum[j] += v[i][j];
                }
                karisum+=cost[i];

            }
        }
        //cout<<bit<<" ";
        //rep(i,m) cout<<sum[i]<<" ";
        //cout<<endl;
        // 判定
        f=1;
        rep(i,m){
            if(sum[i]<x) f=0;
            //karisum+=cost[i];
        }
        //cout<<karisum<<endl;
        if(f==1) mini=min(mini,karisum);
    }
    if(mini==INF) cout<<-1<<endl;
    else cout<<mini<<endl;

    return 0;
}
