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
ll dx[5]={-2,-1,0,1,2};
ll dy[5]={-2,-1,0,1,2};
ll h,w;
vector<vector<ll>> chk(0,vector<ll> (0));
vector<string> str(0);
deque<ll> xq;
deque<ll> yq;
deque<ll> cq;
ll ans=INF;
// h = x   ,  w = y;
void bfs(){
    if(chk[h-1][w-1]) return;
    if(xq.empty()) return;
    ll x=xq.front();
    ll y=yq.front();
    ll c=cq.front();
    //cout<<x<<" "<<y<<" "<<c<<endl;
    xq.pop_front();
    yq.pop_front();
    cq.pop_front();
    if(x==h-1&&y==w-1){
        cout<<c<<endl;
        chk[x][y]= true;
        return;
    }
    if(chk[x][y]) bfs();
    chk[x][y]=true;
    if(x-1>=0&&chk[x-1][y]==false&&str[x-1][y]=='.') {xq.emplace_front(x-1); yq.emplace_front(y);cq.emplace_front(c);}
    if(y-1>=0&&chk[x][y-1]==false&&str[x][y-1]=='.') {xq.emplace_front(x); yq.emplace_front(y-1);cq.emplace_front(c);}
    if(x+1<h&&chk[x+1][y]==false&&str[x+1][y]=='.') {xq.emplace_front(x+1); yq.emplace_front(y);cq.emplace_front(c);}
    if(y+1<w&&chk[x][y+1]==false&&str[x][y+1]=='.') {xq.emplace_front(x); yq.emplace_front(y+1);cq.emplace_front(c);}
    rep(i,5){
        rep(j,5){
            if(i==0&&j==0||i==0&&j==4||i==4&&j==0||i==4&&j==4) continue;
            if(i==2&&j==2) continue;
            if(dx[i]+x<0||dy[j]+y<0) continue;
            if(dx[i]+x>=h||dy[j]+y>=w) continue;
            if(str[dx[i]+x][dy[j]+y]=='.'||chk[dx[i]+x][dy[j]+y]==true) continue;
            xq.emplace_back(dx[i]+x); yq.emplace_back(dy[j]+y);cq.emplace_back(c+1);
          //  cout<<"hi";
        }
    }
    bfs();
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF;
    ll l,r;
    ll sx,sy;
    ll gx,gy;
    cin>>h>>w;
    str.resize(h);
    chk.resize(h);
    rep(i,h) chk[i].resize(w);
    rep(i,h) rep(j,w) chk[i][j]=false;
    rep(i,h) cin>>str[i];
    xq.emplace_back(0);
    yq.emplace_back(0);
    cq.emplace_back(0);
    bfs();

    return 0;
}
