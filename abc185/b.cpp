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

    ll c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll t;
    cin>>n>>m>>t;
    maxi=n;
    ll a[m];
    ll b[m];
    rep(i,m) cin>>a[i]>>b[i];
    n-=a[0];
    if(n<=0) f=1;
    n=min(n+b[0]-a[0],maxi);
    for(ll i=1;i<m;i++){
        n-=a[i]-b[i-1];
        if(n<=0) f=1;
        n=min(n+b[i]-a[i],maxi);
        //cout<<i<<" "<<n<<endl;
    }
    n-=t-b[m-1];
    if(n<=0) f=1;
    if(f) No;
    else Yes;
    return 0;
}
