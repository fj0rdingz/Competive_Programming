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
vector<long long> fact_inv, inv;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
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

    ll a,b,c,d,m,n,k,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    string s,t;
    cin>>k>>s>>t;
    vector<ll> v(10);
    ll x=0;
    rep(i,10) v[i]=k;
    rep(i,4) v[s[i]-'0']--;
    rep(i,4) v[t[i]-'0']--;
    for(ll i=1;i<=9;i++){
        for(ll j=1;j<=9;j++){
            if(v[i]==0) continue;
            if(v[j]==0) continue;
            if(i==j&&v[i]==1) continue;
            s[4]=i+'0';
            t[4]=j+'0';
            ll ta=0,ao=0;
            ll tar[10],aor[10];
            rep(o,10){
                tar[o]=1;
                aor[o]=1;
            }
            rep(o,5){
                tar[s[o]-'0']*=10;
                aor[t[o]-'0']*=10;
            }
            rep(o,10){
                ta+=o*tar[o];
                ao+=o*aor[o];
            }
            ll taka=0,aoka=1;
            if(i==j){
                init_nCk(v[i]);
                taka=nCk(v[i],1);
                init_nCk(v[i]-1);
                aoka=nCk(v[i]-1,1);
            }
            else
            {
                init_nCk(v[i]);
                taka=nCk(v[i],1);
                init_nCk(v[j]);
                aoka=nCk(v[j],1);
            }
            if(ta>ao) sum+=taka*aoka;
            x+=taka*aoka;
        }
    }
    printf("%.8Lf\n",(long double)sum/x);
    return 0;
}
