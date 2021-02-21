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

struct Edge{
    ll to;
    ll d;
};
typedef pair<ll,ll> P;

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
// problem http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=ja

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll V,r;
    ll y;
    // Vがノード数aがedge数rが始点yが終点
    cin>>V>>a>>r>>y;
    r--;y--;
    vector<Edge> Es[V];
    ll d[V];
    priority_queue<P,vector<P>,greater<P>> q;
    map<P,ll> mp;
    UnionFind uf(V);
    rep(i,a)   {
        Edge e;
        cin>>b>>e.to>>e.d>>c;
        b--;
        e.to--;
        uf.merge(b,e.to);
        Es[b].push_back(e);
        P pa=P(e.to,e.d);
        mp[pa]=c;
        mini=b;
        b=e.to;
        e.to=mini;
        Es[b].push_back(e);
        pa=P(e.to,e.d); 
        mp[pa]=c;
    }
    if(!uf.issame(r,y)){
        cout<<-1<<endl;
        return 0;
    }
    rep(i,V) d[i]=INF;
    d[r]=0;
    q.push(P(0,r));
    while(!q.empty()){
        P p=q.top();
        q.pop();
        ll v=p.second;
        if(d[p.second]<p.first) continue;
        rep(i,Es[v].size()){
            Edge e=Es[v][i];
            ll add=0;
            P pa=P(e.to,e.d);
            //P pi=P(e.to,v);
            //mp[pi]=INF;
            if((d[v])%mp[pa]!=0) add=mp[pa]-(d[v])%mp[pa];
           // cout<<add<<endl;
            if(d[e.to]>d[v]+e.d+add) {
                d[e.to]=d[v]+e.d+add;
                q.push(P(d[e.to],e.to));
            }
            pa=P(e.to,e.d);
            P pi=P(e.to,v);
            mp[pa]=10e9+1;
            mp[pi]=10e9+1;
        }
    }
    //rep(i,V){
    //    cout<<i+1<<" "<<d[i]<<endl;
    //}
    cout<<d[y]<<endl;
    
    return 0;
}
