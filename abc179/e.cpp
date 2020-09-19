// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define INF LLONG_MAX
#define ll long long
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
// a^n mod を計算する
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,f=0,mini=INF,sum=0;
    string str;
    vector<ll> v;
    cin>>n>>x>>m;
    for(ll i=1;i<=n;i++){
        if(count(all(v),modpow(x,i,m))!=0){
            v.push_back(modpow(x,i,m));
        }else{
            a=modpow(x,i,m);
        }
    }
    
    sum=accumulate(all(v),(ll)0);
    ll localsum=0;
    b=0;
    rep(i,v.size()){
        if(v[i]==a){
            b=i;
            break;
        }
    }
    for(ll i=b;i<=v.size();i++){
        localsum+=v[i];
    }
    cout<<b<<endl;
    n-=b;
    sum+=localsum*(n/(v.size()-b));
    ll maxi=n%(v.size()-b);
    for(ll i=b;i<b+maxi;i++){
        cout<<i<<" ";
       //sum+=v[i];
    }
    cout<<sum<<endl;

    return 0;
}
