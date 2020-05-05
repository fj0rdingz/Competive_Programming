#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,z,p,q,tmp,sum=0;
    string str;
    cin>>n>>m;
    vector<ll> cnt(n+1);
    vector<ll> x(m+1);
    vector<ll> y(m+1);
    rep(i,m){
        cin>>x[i]>>y[i];
    }
    rep(i,m){
        UnionFind t(n+1);
        rep(j,m){
            if(i==j) continue;
            t.unite(x[j],y[j]);
        }
        ll r;
        r=t.root(1);
        for(j=2;j<=n;j++){
            if(t.root(j)!=r){
                sum++;
                break;
            }
        }
    }
    cout<<sum<<endl;

    return 0;
}



