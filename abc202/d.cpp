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
    cin>>a>>b>>k;
    vector<ll> as(0);
    vector<ll> bs(0);
    vector<ll> cs(61);
    set<ll,ll> s;
    REP(i,2,a+1){
        for(auto p : prime_factor(i)) {
           while(p.second--) as.push_back(p.first);
        }
    }
    REP(i,2,b+1){
        for(auto p : prime_factor(i)) {
           while(p.second--) bs.push_back(p.first);
        }
    }
    REP(i,2,a+b+1){
        for(auto p : prime_factor(i)) {
           while(p.second--) {
               cs[p.first]++;
           }
        }
    }/*
    rep(i,as.size()){
        cs[as[i]]--;
    }ln;    
    rep(i,bs.size()){
        cs[bs[i]]--;
    }ln;*/
    ll size=1;
    rep(i,as.size()){
        cs[as[i]]--;
    }    
    rep(i,bs.size()){
        cs[bs[i]]--;
    }
    rep(i,61){
        while(cs[i]!=0){
            cs[i]--;
            size*=i;
        }
    }
    //cout<<size<<endl;
    vector<char> ans(0);
    ll l=1;
    ll r=size;
    n=a+b;
    rep(i,n){
        cout<<a*size/(long double)(a+b)<<" "<<k<<endl;
        if((long double)a*size/(long double)(a+b)>=(long double)k&&a>0){          //k=4,size=6 num=0.6666
            a--;
            //if(a>0)size/=a;
            //k/=2;
            ans.push_back('a');
        }else{
            if((b-1)>0) k/=(b-1);
            //aの割合のほうがkの割合より高い
            //if((a+b-1)>0)size/=(a+b-1);
            b--;
            ans.push_back('b');
        }
    }
    rep(i,n+1){
        cout<<ans[i];
    }ln;

    return 0;
}
