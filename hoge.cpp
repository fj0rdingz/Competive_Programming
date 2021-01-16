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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll d,m,n,k,x,y,k,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>k;
    vector<vector<ll>> dp(n+1,vector<ll> (k+1));
    vector<ll> v(n);
    vector<ll> w(n);
    rep(i,n)   cin >> w[i]>>v[i];
    rep(i,n){
        if(dp[i])
        dp[i+1][k]
    }
    cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<endl;

    return 0;
}
