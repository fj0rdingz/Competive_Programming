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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    rep(i,n)   cin >> v[i];
    rep(i,n) sum+=v[i];
    ll l=0,r=sum;
    ll dp[n+1][sum+5];
    rep(i,n+1)rep(j,sum+5) dp[i][j]=0;
    dp[0][0]=1;
    REP(i,1,n+1){
        rep(j,sum+5){
            if(dp[i-1][j]){
                dp[i][j]=1;
                if(j+v[i-1]<=sum) dp[i][j+v[i-1]]=1;
            }
        }
    }/*
    REP(i,0,n+1){
        rep(j,sum+5){
            cout<<dp[i][j]<<" ";
        }ln;
    }*/
    mini=INF;
    rep(i,sum+1){
        if(dp[n][i]){
         //   cout<<i<<" "<<sum-i<<" "<<mini<<endl;
            mini=min(max(i,sum-i),mini);
        }
    }
    cout<<mini<<endl;


    return 0;
}
