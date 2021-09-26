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
class Radix {
private:
  const char* s;
  int a[128];
public:
  Radix(const char* s = "0123456789ABCDEF") : s(s) {
    int i;
    for(i = 0; s[i]; ++i)
      a[(int)s[i]] = i;
  }
  std::string to(long long p, int q) {
    int i;
    if(!p)
      return "0";
    char t[64] = { };
    for(i = 62; p; --i) {
      t[i] = s[p % q];
      p /= q;
    }
    return std::string(t + i + 1);
  }
  std::string to(const std::string& t, int p, int q) {
    return to(to(t, p), q);
  }
  long long to(const std::string& t, int p) {
    int i;
    long long sm = a[(int)t[0]];
    for(i = 1; i < (int)t.length(); ++i)
      sm = sm * p + a[(int)t[i]];
    return sm;
  }
};
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    Radix r;
    ll c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string a,b;
    cin>>k>>a>>b;

    cout<<r.to(a, k) * r.to(b, k) <<endl;

    return 0;
}
