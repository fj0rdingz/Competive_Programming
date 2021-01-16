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
int  check[2005][2005];
vector<string> s(50);
ll h,w;
class mint {
    long long x;
public:
    mint(long long x=0) : x((x%mod+mod)%mod) {}
    mint operator-() const { 
      return mint(-x);
    }
    mint& operator+=(const mint& a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator-=(const mint& a) {
        if ((x += mod-a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator*=(const  mint& a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint& a) const {
        mint res(*this);
        return res+=a;
    }
    mint operator-(const mint& a) const {
        mint res(*this);
        return res-=a;
    }
    mint operator*(const mint& a) const {
        mint res(*this);
        return res*=a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t>>1);
        a *= a;
        if (t&1) a *= *this;
        return a;
    }
    // for prime mod
    mint inv() const {
        return pow(mod-2);
    }
    mint& operator/=(const mint& a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint& a) const {
        mint res(*this);
        return res/=a;
    }

    friend ostream& operator<<(ostream& os, const mint& m){
        os << m.x;
        return os;
    }
};
void bfs(ll y,ll x){
    if(s[y][x]=='.') check[y][x]=1;
    if(x<w-1&&s[y][x+1]=='.') {
        check[y][x+1]=1;
        bfs(y,x+1);
    }
    if(y<h-1&&s[y+1][x]=='.') {
        check[y+1][x]=1;
        bfs(y+1,x);
    }
    if(x<w-1&&y<h-1&&s[y+1][x+1]=='.') {
        check[y+1][x+1]=1;
        bfs(y+1,x);
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str; 
    cin>>h>>w;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    s.resize(h);
    rep(i,h)   cin >> s[i];
    mint ans1[h][w];
    mint ans2[h][w];
    mint ans3[h][w];
    mint ans4[h][w];
    rep(i,h)rep(j,w){
        ans1[i][j]=0;
        ans2[i][j]=0;
        ans3[i][j]=0;
        ans4[i][j]=0;
        check[i][j]=0;
    }
    bfs(0,0);
        //naname miginiiku
    rep(j,w-1){
        rep(i,h){
            if(check[i][j]&&i+1!=h&&j+1!=w&&
               s[i][j]=='.'&&s[i+1][j+1]=='.') ans1[i+1][j+1]+=ans1[i][j]+1;
        }
    }
    for(ll i=1;i<h-1;i++){
        rep(j,w){
            if(check[i][j]&&i+1!=h&&j+1!=w&&
               s[i][j]=='.'&&s[i+1][j+1]=='.') ans1[i+1][j+1]+=ans1[i][j]+1;
        }
    }
    // yoko keisan
    rep(i,h){
        rep(j,w){
            if(check[i][j]&&j!=w-1&&s[i][j]=='.'&&s[i][j+1]=='.') ans1[i][j+1]+=ans1[i][j]+1;
        }
    }
    //tate
    rep(j,w){
        rep(i,h){
            if(check[i][j]&&i!=h-1&&s[i][j]=='.'&&s[i+1][j]=='.') ans1[i+1][j]+=ans1[i][j]+1;
        }
    }

    //rep(i,h)rep(j,w) ans4[i][j]=ans1[i][j]+ans2[i][j]+ans3[i][j];
    rep(i,h){rep(j,w){
        cout<<ans1[i][j]<<" ";
    }ln;}
    cout<<ans4[h-1][w-1]<<endl;
    return 0;
}
