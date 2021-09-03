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
ll h,w,q;
vector<string> str(0);
map< int64_t, int > prime_factor(int64_t n) {
  map< int64_t, int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll n,k,x,y,maxi=0,mini=INF,sum=0,f=0;
    cin>>n;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    ll m=v[0];
    rep(i,n) m=__gcd(m,v[i]); 
    vector<ll> arr(1001001,0);
    rep(i,n){
        for(auto p : prime_factor(v[i])) {
            arr[p.first]++;
            if(arr[p.first]==2) f=1; 
        }
        if(f) break;
    }
    if(m==1&&f) cout<<"setwise coprime"<<endl;
    else if(f) cout<<"not coprime"<<endl;
    else cout<<"pairwise coprime"<<endl;

    return 0;
}
