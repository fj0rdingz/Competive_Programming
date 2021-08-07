// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
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
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
ll h,w;
vector<string> str(0);
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF;
    ll l,r;
    ll sx,sy;
    ll gx,gy;
    ll h,w;
    cin>>h>>w;
    //cin>>sx>>sy>>gx>>gy;
    str.resize(h+2);
    rep(i,h) cin>>str[i+1];
    rep(i,w+2) str[0]+='#';
    rep(i,w+2) str[h+1]+='#';
    rep(i,h) str[i+1].insert(str[i+1].begin(),'#');
    rep(i,h) str[i+1].push_back('#');
    rep(i,h+2){
        rep(j,w+2){
            cout<<str[i][j];
        }ln;
    }


    return 0;
}
