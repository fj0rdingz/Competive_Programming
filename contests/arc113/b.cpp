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
long long powMod(long long x, long long k, long long m) {
  if (k == 0)     return 1;
  if (k % 2 == 0) return powMod(x*x % m, k/2, m);
  else            return x*powMod(x, k-1, m) % m;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>a>>b>>c;
    a=a%10;
    ll cur=a;
    map<ll,ll> mp;
    vector<ll> v(1);
    v[0]=a;
    while(1){
        cur=cur*a;
        cur%=10;
        if(find(all(v),cur)!=v.end()) break;
        v.push_back(cur);
    }
    //rep(i,v.size()) cout<<v[i]<<" ";
  //  ln;
    d=powMod(b,c,v.size());
   // cout<<d<<endl;
    if(d-1==-1)cout<<v[v.size()-1]<<endl;
    else cout<<v[d-1]<<endl;

    return 0;
}
