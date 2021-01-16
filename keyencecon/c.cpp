// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 998244353
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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,m,n,k,x,y,maxi=0,f=0,mini=INF;
    mint sum=0;
    char c;
ll h,w;
    //string str;
    ll H,W;
    cin>>H>>W>>k;
    string s[H];
    rep(i,k)   {
        cin >>a>>b>>c;
        a--;b--;
        s[a][b]=c;
    }
   // string ck[H+100];
    mint cal[H+10][W+10];
    rep(i,H) rep(j,W) s[i][j]='.';
  //  rep(i,H) rep(j,W) ck[i][j]='.';
    rep(i,H) rep(j,W) cal[i][j]=1;

    for(ll p=0;p<W;p++){
        ll ibu=p;
        ll i=0;
        ll cnt=1;
        for(ll j=p;j>=0&&i<H;i++,j--){
            if(s[i][j]=='.') {
                cnt*=3;
                if(cnt>(ll)mod*3) cnt%=mod; 
            }
         //   ck[i][j]='A';
        }
        p=ibu;
        i=0;
        for(ll j=p;j>=0&&i<H;i++,j--){
            if(s[i][j]=='.') {
                cal[i][j]=cnt/3;
            }else{
                cal[i][j]=cnt;
            }
        }
    }
    for(ll p=1;p<H;p++){
        ll ibu=p;
        ll j=W-1;
        ll cnt=1;
        for(ll i=p;j>=0&&i<H;i++,j--){
            if(s[i][j]=='.') {
                cnt*=3;
                if(cnt>(ll)mod*3) cnt%=mod; 
            }
       //     ck[i][j]='B';
        }
        p=ibu;
        j=W-1;
        for(ll i=p;j>=0&&i<H;i++,j--){
            if(s[i][j]=='.') {
                cal[i][j]=cnt/3;
            }else{
                cal[i][j]=cnt;
            }
        }
    }
   // rep(i,H) {rep(j,W) {cout<<s[i][j];}ln;}
   // rep(i,H) {rep(j,W) {cout<<cal[i][j];}ln;}
   // rep(i,H) {rep(j,W) {cout<<ck[i][j];}ln;}
    deque<ll> hq;
    deque<ll> wq;
    deque<mint> sumq;
    mint su;
    hq.push_back(0);
    wq.push_back(0);
    sumq.push_back(1);
    while(!hq.empty()){
        h=hq.front();
        w=wq.front();
        su=sumq.front();
        hq.pop_front();
        wq.pop_front();
        sumq.pop_front();
        if(H-1==h&&W-1==w){
            sum+=su;
            continue;
        }else if(s[h][w]=='D'){
            if(h+1!=H){
                hq.push_back(h+1);
                wq.push_back(w);
                sumq.push_back(su*cal[h][w]);
            }
        }else if(s[h][w]=='R'){
            if(w+1!=W){
                hq.push_back(h);
                wq.push_back(w+1);
                sumq.push_back(su*cal[h][w]);
            }
        }else if(s[h][w]=='X'){
            if(w+1!=W){
                hq.push_back(h);
                wq.push_back(w+1);
                sumq.push_back(su*cal[h][w]);
            }
            if(h+1!=H){
                hq.push_back(h+1);
                wq.push_back(w);
                sumq.push_back(su*cal[h][w]);
            }
        }else if(s[h][w]=='.'){
            if(w+1!=W){
                hq.push_back(h);
                wq.push_back(w+1);
                sumq.push_back(su*2*cal[h][w]);
            }
            if(h+1!=H){
                hq.push_back(h+1);
                wq.push_back(w);
                sumq.push_back(su*2*cal[h][w]);
            }
        }else{
         //   assert(0);
        }
    }
    if(s[H-1][W-1]=='.') sum*=3;
    cout<<sum<<endl;
    return 0;
}
