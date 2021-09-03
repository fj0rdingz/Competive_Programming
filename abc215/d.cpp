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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    set<ll> s;
    rep(i,n){
        cin>>a;
        s.insert(a);
    }
    set<ll> base;
    vector<ll> v(s.size());
    ll i=0;
    for(auto itr=s.begin();itr!=s.end();++itr){
        v[i]=*itr;
        i++;
    }
    rep(i,v.size()){
        for(auto p : prime_factor(v[i])) {
            base.insert(p.first);
        }
    }

    vector<bool> prime(m+1,true);
    prime[0]=false;prime[1]=false;
    for(ll i=2;i<=m+1;i++){
        if(!prime[i]) continue;
        if(base.find(i)!=base.end()) {
            for(ll j=i;j<=m;j+=i){
                prime[j]=false;
            }
        }
    }
    prime[1]=true;
    rep(i,m+1) if(prime[i]==true) sum++;
    cout<<sum<<endl;
    rep(i,m+1) if(prime[i]) cout<<i<<endl;

    return 0;
}

