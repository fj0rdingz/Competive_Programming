// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll unsigned long long
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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> p={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,49};
    for(ll bit = 1;bit<(1<<p.size());bit++){
        ll num =1;
        f=0;
        rep(i,p.size()){
            if(bit&(1<<i)) num*=p[i];
        }
        rep(i,v.size()){
            if(__gcd(num,v[i])==1) f=1;
        }
        if(!f){
            mini=min(mini,num);
        }
    }
    cout<<mini<<endl;
    return 0;
}
