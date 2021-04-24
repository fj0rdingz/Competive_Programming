// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod LLONG_MAX
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
typedef vector<int> vi;
typedef vector<vector<vector<int>>>
        vvvi;
typedef vector<vector<int>> vvi;
typedef pair<ll,ll> P;
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
vector<long long> fact_inv, inv;
/*  init_nCk :二項係数のための前処理
    計算量:O(k)
*/
void init_nCk(int SIZE) {
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        inv[i] = mod - inv[mod % i] * (mod / i) % mod;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % mod;
    }
}
/*  nCk :modでの二項係数を求める(前処理 int_nCk が必要)
    計算量:O(k)
*/
long long nCk(int n, int k) {
    assert(!(n < k));
    assert(!(n < 0 || k < 0));
    long long ans = 1;
    for (int i = n; i >= n - k + 1; i--) {
        ans *= i;
        ans %= mod;
    }
    return ans * fact_inv[k] % mod;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m>>a>>b;
    ll dp[n+1][m+1][1<<m];
    rep(i,n+1)rep(j,m+1)rep(k,1<<m) dp[i][j][k]=0;
    dp[0][0][0]=1;
    ll color[n][m];
    rep(i,n)rep(j,m) color[i][j] = 0;
    if(n%2&&m%2){
        //一個が埋まっている時を全探索
        rep(q,n){
            rep(r,m){
            rep(i,n+1)rep(j,m+1)rep(k,1<<m) dp[i][j][k]=0;
            dp[0][0][0]=1;

                color[q][r]= 1;
                rep(i,n){
                    rep(j,m){
                        rep(used,(1<<m)){
                            if((used&(1<<j)) || color[i][j]){
                                int next = used & ~(1<<j);
                                if(j+1<m) dp[i][j+1][next] += dp[i][j][used];
                                else dp[i+1][0][next]      += dp[i][j][used];
                            }else{
                                if(j+1<m &&!color[i][j+1]&&!(used&(1<<(j+1)))){
                                    int next = used | (1<<(j+1));
                                    dp[i][j+1][next] += dp[i][j][used];
                                }
                                if(i+1<n&&!color[i+1][j]){
                                    int next = used | (1<<j);
                                    if(j+1<m) dp[i][j+1][next] += dp[i][j][used];
                                    else dp[i+1][0][next]      +=dp[i][j][used];
                                }
                            }
                        }
                    }
                }
                //cout<<q<<r<<" "<<dp[n-1][m-1][(1<<m-1)];
                //ln;
                color[q][r]= 0;
                sum+=dp[n-1][m-1][(1<<m-1)];
                if(q==0&&r==0) sum+=dp[n-1][m-1][(1<<m-1)];
            }
        }


        cout<<sum<<endl;
        return 0;
    }else{
        rep(i,n){
            rep(j,m){
                rep(used,(1<<m)){
                    if((used&(1<<j)) || color[i][j]){
                        int next = used & ~(1<<j);
                        if(j+1<m) dp[i][j+1][next] += dp[i][j][used];
                        else dp[i+1][0][next]      += dp[i][j][used];
                    }else{
                        if(j+1<m &&!color[i][j+1]&&!(used&(1<<(j+1)))){
                            int next = used | (1<<(j+1));
                            dp[i][j+1][next] += dp[i][j][used];
                        }
                        if(i+1<n&&!color[i+1][j]){
                            int next = used | (1<<j);
                            if(j+1<m) dp[i][j+1][next] += dp[i][j][used];
                            else dp[i+1][0][next]      +=dp[i][j][used];
                        }
                    }
                }
            }
        }
        sum=dp[n-1][m-1][(1<<m-1)];
    }
    init_nCk(a+b/2);
    cout<<nCk(a+b/2,b/2)*sum<<endl;



    return 0;
}
