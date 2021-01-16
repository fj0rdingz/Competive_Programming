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
ll n;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool C(long double num){
    long double sum=0;
    sum=num*(num+1)/2;
    return(n+1>sum);
}
bool hantei(ll num){
    if(num==0) return true;
    ll sum=0;
    sum=num*(num+1)/2;
    return(sum<=n+1);
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //cout<<LLONG_MAX<<endl;
    
    long double ub=LLONG_MAX;
    long double lb=0;
    for(ll i=0;i<10000;i++){
        long double mid=(lb+ub)/2;
        if(mid==0) continue;
        if(C(mid)) lb=mid;
        else ub=mid;
    }
    ll ans=lb;
    if(hantei(ans+1)) ans++;
    cout<<n+1-ans<<endl;

    return 0;
}
