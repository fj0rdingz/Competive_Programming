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
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
ll maxi=0;
ll maxnode = 0;
vector<ll> a(1);
    ll h,w;

// index が条件を満たすかどうか
bool isOK(ll index, ll key) {
    if (a[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
ll binary_search(ll key) {
    ll ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll ok = (ll)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}
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
//https://pyteyon.hatenablog.com/entry/2019/03/11/200000#Union-Find-%E6%9C%A8%E3%81%AE%E5%AE%9F%E8%A3%85
// union by size + path having
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

//    UnionFind t(n+1);で初期化する!!!!!!!(n番目の値が入ってきたときにせぐふぉする)
class UnionFind {
public:
    vector <ll> par; // 各元の親を表す配列
    vector <ll> siz; // 素集合のサイズを表す配列(1 で初期化)

    // Constructor
    UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    void init(ll sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1LL);  // resize だとなぜか初期化されなかった
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }

    // Member Function
    // Find
    ll root(ll x) { // 根の検索
        while (par[x] != x) {
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }

    // Union(Unite, Merge)
    bool merge(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        // merge technique（データ構造をマージするテク．小を大にくっつける）
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(ll x, ll y) { // 連結判定
        return root(x) == root(y);
    }

    ll size(ll x) { // 素集合のサイズ
        return siz[root(x)];
    }
};
ll calcunion(ll x,ll y){
    if(w==1) return x;
    else return x*h+y;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll b,c,d,m,n,k,x,y,f=0,mini=INF,sum=0;
    string str;
    cin>>h>>w;
    UnionFind uf(h*w);
    vector<bool>chk(h*w);
    ll q;
    cin>>q;
    rep(i,q){
        ll a;
        cin>>a;
        if(a==1){
            cin>>x>>y;
            x--;y--;
          //  cout<<"painted: "<<x<<" "<<y<<" "<<calcunion(x,y)<<endl;
            ll num = calcunion(x,y);
            if(num-h>=0&&chk[num-h]) uf.merge(num,num-h);
            if(num-1>=0&&chk[num-1]&&y!=0&&w!=1) uf.merge(num,num-1);
            if(num+h<h*w&&chk[num+h]) uf.merge(num,num+h);
            if(num+1<h*w&&chk[num+1]&&y+1!=w&&w!=1) uf.merge(num,num+1);
            chk[num]=true;
        }else{
            cin>>c>>d>>x>>y;
            c--;d--;x--;y--;
            if(c==x&&d==y&&chk[calcunion(c,d)]==false){
                No;
            }else if(uf.issame(calcunion(c,d),calcunion(x,y))) Yes;
            else No;
        }
    }/*
    rep(i,h){
        rep(j,w){
            if(chk[calcunion(i,j)]) cout<<"#";
            else cout<<".";
        }ln;
    }*/

    return 0;
}
