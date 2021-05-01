// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define endl '\n'
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
using namespace std;
//using namespace atcoder;
typedef pair<ll,ll> P;
typedef tuple<ll,ll,ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> b(n);
    vector<ll> a(n);
    vector<ll> c(n);
    vector<ll> d(n);
    vector<ll> e(n);
    T t[n][n-1];
    rep(i,n)   cin >> a[i]>>b[i]>>c[i]>>d[i]>>e[i];
    rep(i,n){
        for(ll j=0;j<n;j++){
            ll ind=0;
            t[i][ind]=make_tuple(min(a[i],a[j]),min(b[i],b[j]),min(c[i],c[j]),min(d[i],d[j]),min(e[i],e[j]));
            ind++;
        }
    }
    rep(i,n){
        for(ll j=0;j<n;j++){
            ll ind=0;
            t[i][ind]=make_tuple(min(a[i],a[j]),min(b[i],b[j]),min(c[i],c[j]),min(d[i],d[j]),min(e[i],e[j]));
            ind++;
        }
    }

    return 0;
}
