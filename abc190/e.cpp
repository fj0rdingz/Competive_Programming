// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
ll k;
vector<Edge> es;
vector<ll> c(10);
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
struct Edge{
    ll u,v,cost;
};

bool comp(const Edge& e1,const Edge& e2){
    return e1.cost<e2.cost;
}
void bfs(ll node,ll cost){
    
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll v,E;
    cin>>v>>E;
    es.resize(E);
    cin>>k;
    c.resize(k);
    rep(i,k) cin>>c[i];
    set<ll> chk;
    rep(i,k) chk.insert(c[i]);
    UnionFind uf(v);
    rep(i,E){
        cin>>es[i].u>>es[i].v;
        //uf[V]は存在しないため全部マイナス1しておいたほうが平和なことが多い
        es[i].u--;
        es[i].v--;
        es[i].cost=INF;
    }
    bfs(*chk.begin(),0);
    sort(es.begin(),es.begin()+E,comp);
    uf.init(v);
    rep(i,E){
        Edge e=es[i];
        if(!uf.issame(e.u,e.v)){
            uf.merge(e.u,e.v);
            sum+=e.cost;
        }
    }
    cout<<sum<<endl;

    return 0;
}
