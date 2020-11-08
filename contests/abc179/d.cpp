// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 998244353
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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll size=200008;
    ll dp[size];
    rep(i,size) dp[i]=0;
    cin>>n>>k;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<P> v(k);
    rep(i,k)  {
        cin>>a>>b;
        v[i]=P(a,b);
    }
    dp[1]=1;
    ll wa=0;
    for(ll i=1;i<=n;i++){
        wa+=dp[i];
        rep(j,k){
            if(i+v[j].first>=size) continue;
            if(i+v[j].second>=size){
                v[j].second=size-i;
            }
            dp[i+v[j].first]+=dp[i];
            dp[i+v[j].second]-=dp[i];
            dp[i+v[j].first]%=mod;
        }
    }
    rep(i,20){
        cout<<dp[i]<<" ";
    }
    ln;
    cout<<dp[n]<<endl;

    return 0;
}
