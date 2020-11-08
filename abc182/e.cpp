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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    ll h,w;
    string str;
    cin>>h>>w>>n>>m;
    vector<ll> lx(n);
    vector<ll> ly(n);
    vector<ll> bx(m);
    vector<ll> by(m);
    rep(i,n)   {cin>>b>>a;b--;a--;ly[i]=b;lx[i]=a;}
    rep(i,m)   {cin>>b>>a;b--;a--;by[i]=b;bx[i]=a;}
    char s[h][w];
    char ans[h][w];
    char g[h][w];
    rep(i,h)rep(j,w) {s[i][j]='.';ans[i][j]='.';g[i][j]='.';}
    rep(i,n){
        s[ly[i]][lx[i]]='L';
    }
    rep(i,m){
        s[by[i]][bx[i]]='B';
        ans[by[i]][bx[i]]='B';
    }
    // search R;
    rep(i,n){
        ll x=lx[i];ll y=ly[i];
        while(s[y][x]!='B'&&x<w&&g[y][x]!='X'){
            g[y][x]='X';
            x++;
        }
    }
    //merge,init
    rep(i,h)rep(j,w) if(g[i][j]=='X') ans[i][j]='X';
    rep(i,h)rep(j,w) g[i][j]='.';

    // search L;
    rep(i,n){
        ll x=lx[i];ll y=ly[i];
        while(s[y][x]!='B'&&x>=0&&g[y][x]!='X'){
            g[y][x]='X';
            x--;
        }
    }
    rep(i,h)rep(j,w) if(g[i][j]=='X') ans[i][j]='X';
    rep(i,h)rep(j,w) g[i][j]='.';

    //search U
    rep(i,n){
        ll x=lx[i];ll y=ly[i];
        while(s[y][x]!='B'&&y>=0&&g[y][x]!='X'){
            g[y][x]='X';
            y--;
        }
    }
    rep(i,h)rep(j,w) if(g[i][j]=='X') ans[i][j]='X';
    rep(i,h)rep(j,w) g[i][j]='.';

    //search D
    rep(i,n){
        ll x=lx[i];ll y=ly[i];
        while(s[y][x]!='B'&&y<h&&g[y][x]!='X'){
            g[y][x]='X';
            y++;
        }
    }
    rep(i,h) rep(j,w) if(g[i][j]=='X') ans[i][j]='X';

    rep(i,h) rep(j,w) if(ans[i][j]=='X') sum++;

    cout<<sum<<endl;
    return 0;
}
