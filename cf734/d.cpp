// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
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
//using namespace atcoder;
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool tf=true;
int H, W, A, B;
vector<vector<bool>> used(100,vector<bool> (100));

//---------------------------------------------------------------------------------------------------
int dfs(int x, int y, int a) {
    // 最後まで探索して、長方形のタイルを使い切っているなら、組合せを+1する
    if (H == y) return a == 0;

    // 横の端まで行ったら次の行へ
    if (W == x) return dfs(0, y + 1, a);

    // 既に置かれているなら何もできないので、次のマスへ
    if (used[y][x]) return dfs(x + 1, y, a);

    int res = 0;

    // 縦置き
    if (y + 1 < H && !used[y + 1][x] && 0 < a) {
        used[y][x] = used[y + 1][x] = true;
        res += dfs(x + 1, y, a - 1);
        used[y][x] = used[y + 1][x] = false;
    }

    // 横置き
    if (x + 1 < W && !used[y][x + 1]) {
        used[y][x] = used[y][x + 1] = true;
        res += dfs(x + 1, y, a);
        used[y][x] = used[y][x + 1] = false;
    }

    // 何も置かない
    //res += dfs(x + 1, y, a);

    return res;
}
//---------------------------------------------------------------------------------------------------
int main() {

    cin.tie(0);
   	ios::sync_with_stdio(false);
    ll loop;
    cin>>loop;
    rep(_,loop){
        cin >> W >> H >> A;
        //A よこ
        used.resize(H);
        rep(i,H) used[i].resize(W);
        if(dfs(0, 0, A)) YES;
        else NO;
    }
    return 0;
}