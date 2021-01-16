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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    ll num=1;
    rep(i,n) num*=2;
    vector<ll> v(num);
    n=num;
    rep(i,n) cin>>v[i];
    ll amax=0,aadd;
    ll bmax=0,badd;
    rep(i,n/2){
        if(v[i]>amax){
            amax=v[i];
            aadd=i;
        }
    }
    for(ll i=n/2;i<n;i++){
        if(v[i]>bmax){
            bmax=v[i];
            badd=i;
        }
    }
    if(amax>bmax){
        cout<<badd+1<<endl;
    }else{
        cout<<aadd+1<<endl;
    }
    return 0;
}
