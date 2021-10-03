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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll c,d,m,n,k,x,y,maxi=0,f=0,mini=INF/3,sum=0;
    string str;
    cin>>n>>x>>y;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<P> p(n);
    rep(i,n) {
        cin>>c>>d;
        p[i]=P(c,d);
    }
    ll dp[310][620][620];
    rep(i,302)rep(j,602)rep(k,602) dp[i][j][k]=INF/3;
    dp[0][0][0]=0;
    for(ll i=1;i<=n;i++){
        rep(j,301){
            rep(k,301) {
                if(j-p[i-1].first>=0&&k-p[i-1].second>=0) dp[i][j][k]=min(dp[i-1][j][k],dp[i-1][j-p[i-1].first][k-p[i-1].second]+1);
                else dp[i][j][k]=dp[i-1][j][k];
            }
        }
    }

    rep(j,602){
        rep(k,602){
            if(j>=x&&k>=y) {
                mini=min(dp[n+1][j][k],mini);
                f=1;
            }
        }
    }

    if(mini<INF/3)    cout<<mini<<endl;
    else cout<<-1<<endl;
    return 0;
}
