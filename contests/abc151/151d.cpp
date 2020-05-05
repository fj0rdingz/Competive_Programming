#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using mii = map<int, int>;
using msi = map<string, int>;
using pii = pair<int, int>;
 
struct Edge {
    int to;     // 辺の行き先
    int weight; // 辺の重み
    Edge(int t, int w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;
 
const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,1,0,-1};
 
int d[50][50];
 
int main()
{
    ios::sync_with_stdio(false);
    int R, C;
    cin >> R >> C;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    --sy; --sx; --gy; --gx;
    string s[R];
    REP(i, R) cin >> s[i];
 
    REP(i, R) REP(j, C) d[i][j] = 1e9;
    queue<pii> que;
    que.push(pii(sy, sx));
    d[sy][sx] = 0;
 
    while(!que.empty()) {
        pii v = que.front();
        que.pop();
        if(v.first == gy && v. second == gx) break;
        REP(i, 4) {
            int y = v.first + dy[i], x = v.second + dx[i];
            if(y >= 0 && y < R && x >= 0 && x < C && s[y][x] != '#' && d[y][x] == 1e9) {
                d[y][x] = d[v.first][v.second] + 1;
                que.push(pii(y, x));
            }
        }
    }
    cout << d[gy][gx] << endl;
 
 
 
 
 
    return 0;
}