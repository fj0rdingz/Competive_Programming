// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#include <atcoder/all>
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
using namespace atcoder;
typedef pair<ll,ll> P;
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll h,w;
    cin>>h>>w>>c;
    vector<vector<ll>> v(h,vector<ll> (w));
    rep(i,h)rep(j,w)   cin >> v[i][j];
    mcf_graph<ll,ll> g(h*w+2);
    rep(i,h){
        rep(j,w){
        g.add_edge(n,i*h+j,1,v[i][j]);
        }
    }
    rep(i,h){
        rep(j,w){
        g.add_edge(i*h+j,n+1,1,v[i][j]);
        }
    }
    rep(i,h-1){
        rep(j,w){
            g.add_edge(i*h+j,(i+1)*h+j,1,c);
            g.add_edge((i+1)*h+j,i*h+j,1,c);
        }
    }
    rep(j,w-1){
        rep(i,h){
            g.add_edge(i*h+j,i*h+j+1,1,c);
            g.add_edge(i*h+j+1,i*h+j,1,c);
        }
    }
    pair<ll,ll> p=g.flow(n,n+1,1);
    cout<<p.second<<endl;


    return 0;
}
