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
ll solve(ll l,ll r,ll num){
    return(((l+r))%mod*((r-l+1)%mod)*num/2%mod);
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    ll i=1;
    for(ll num=1;num<=18;num++){
        if(min(r,i*10-1)>=max(l,i)) ans+=solve(max(i,l),min(r,i*10-1),num);
        ans%=mod;
       // cout<<solve(max(i,l),min(r,i*10),num)<<endl;
        i*=10;
    }
    if(r==10e18) ans+=18;
    ans%=mod;
    cout<<ans<<endl;


    return 0;
}
