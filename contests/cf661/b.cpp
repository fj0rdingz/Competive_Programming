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
#define all(x) (x).begin(),(x).end()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>d;
    rep(_,d){
        sum=0;
        cin>>n;
        vector<ll> v(n);
        vector<ll> w(n);
        rep(i,n)   cin >> v[i];
        rep(i,n)   cin >> w[i];
        ll minv=INF;
        ll minw=INF;
        rep(i,n)  minv=min(minv,v[i]);
        rep(i,n)  minw=min(minw,w[i]);
        ll nv,nw;
        //cout<<"minv: "<<minv<<" minw: "<<minw<<endl;
        rep(i,n){
            nv=v[i]-minv;
            nw=w[i]-minw;
            sum+=max(nv,nw);
        }
        cout<<sum<<endl;

    }
    return 0;
}
