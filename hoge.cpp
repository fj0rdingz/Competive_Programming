// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX/3
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
ll black,white;
typedef pair<ll,ll> P;
vector<vector<ll>> c(0,vector<ll> (0));
ll h,w;
vector<string> str(0);
ll a,b,m,n,maxi=0,f=0,mini=INF,sum=0;
ll V,r;

void bfs(ll x,ll y){
    if(c[x][y]) return;
    c[x][y]=true;
    if(str[x][y]=='.'){
        white++;
        rep(i,4){
            if(str[x+dx[i]][y+dy[i]]=='#'&&!c[x+dx[i]][y+dy[i]]){
                bfs(x+dx[i],y+dy[i]);
            }
        }
    }else if(str[x][y]=='#'){
        black++;
        rep(i,4){
            if(str[x+dx[i]][y+dy[i]]=='.'&&!c[x+dx[i]][y+dy[i]]){
                bfs(x+dx[i],y+dy[i]);
            }
        }
    }
    return;
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    cin>>h>>w;
    //cin>>sx>>sy>>gx>>gy;
    str.resize(h+2);
    rep(i,h) cin>>str[i+1];
    rep(i,w+2) str[0]+='%';
    rep(i,w+2) str[h+1]+='%';
    rep(i,h) str[i+1].insert(str[i+1].begin(),'%');
    rep(i,h) str[i+1].push_back('%');
    // Vがノード数aがedge数rが始点
    h+=2;
    w+=2;
    V=h*w;
    c.resize(h);
    rep(i,h) c[i].resize(w);
    rep(i,h)rep(j,w) c[i][j]=false;

    REP(i,1,h-1){
        REP(j,1,w-1){
            if(str[i][j]=='.') continue;
            black=0;
            white=0;
            bfs(i,j);
            sum+=black*white;
        }
    }
    __builtin_popcount(13);
    cout<<sum<<endl;
    return 0;
}
