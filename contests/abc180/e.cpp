#include <bits/stdc++.h>
#define LOOP(n) for (int _i = 0; _i < (n); _i++)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define RREP(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, r, n) for (int i = (r); i < (n); ++i)
#define ALL(obj) begin(obj), end(obj)
using namespace std;
using ll = long long;
const int INF = 1000100100;
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
int V, E;
int G[20][20];  // グラフ
int dp[1000000][20];
// メモ化再帰
int rec(int S, int v) {  
    if (S == 0) {
        if (v == 0) {
            return 0;
        } else {
            return INF;
        }
    }
    if ((S & (1 << v)) == 0) {  // Sに{v}が含まれていない
        return INF;
    }
    int &ret = dp[S][v];
    if (ret != 0) return ret;
    ret = INF;
    REP(u, V) { chmin(ret, rec(S ^ (1 << v), u) + G[u][v]); }
    return ret;
}
int main() {
    cin >> V;
    // グラフの初期化
    REP(i, 20) {
        REP(j, 20) { G[i][j] = INF; }
    }
    vector<ll> x(V);
    vector<ll> y(V);
    vector<ll> z(V);

    REP(i, V) {
        cin >> x[i]>>y[i]>>z[i];
    }
    REP(i,V){
        REP(j,V){
            if(i==j) G[i][j]=0;
            else G[i][j]=abs(x[i]-x[j])+abs(y[i]-y[j])+max(0LL,z[i]-z[j]);
        }
    }

    int ans = rec((1 << V) - 1, 0);
    if (ans != INF) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}