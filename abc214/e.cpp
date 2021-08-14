// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#include <atcoder/all>
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
using namespace atcoder;
using S = ll;
typedef pair<ll,ll> P;
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

ll op(ll a, ll b){ return max(a, b);}
ll mapping(ll f, ll x){ return max(f, x); }
ll e(){return 0;}
ll composition(ll f, ll g){ return max(f, g); }
ll id(){ return 0LL; }
int main() {
  cin.tie(0);
 	ios::sync_with_stdio(false);

  ll a,b,c,d,m,n,k,x,y,w,maxi=0,f=0,mini=INF,sum=0;
  string str;
  cin>>k;
  rep(_,k){
    cin>>w>>n;
    vector<ll> v(w+1);
        lazy_segtree<ll,op,e,ll,mapping,composition,id> seg(v);
        vector<ll> l(n);
        vector<ll> r(n);
    rep(i,n){
        cin>>a>>b;
        b++;
        seg.apply(a,b,seg.prod(a,b)+1);
        cout<<seg.prod(a,b)<<endl;
        l[i]=a;
        r[i]=b;
    }
  }

  return 0;
}
