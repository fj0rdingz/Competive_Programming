// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
ll target;
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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    ll maxi=0,f=0,sum=0,mini=INF;
    string str,str1,str2;
    ll i;
    double h;
    ll n,x,m;
    ll a,b,d,c;
    cin>>n;
    vector<ll> v(n);
    UnionFind t(n+1);
    rep(i,n) cin>>v[i];
    rep(i,n){
        t.merge(i+1,v[i]);
    }

    for(i=1;i<=n;i++){
        if(t.size(i)%2) f=1;
       // cout<<t.size(i)<<" "<<i<<endl;
    }
    if(f==1)cout<<-1<<endl;
    else cout<<n/2<<endl;


    return 0;
}
