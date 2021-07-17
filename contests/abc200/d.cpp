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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    map<ll,ll> mp;
    map<ll,ll> keepans; //v[i]%200を入れたらiが返ってくる
    rep(i,n){
        if(mp[v[i]%200]==0){
            mp[v[i]%200]=i+1;
        }else{
            Yes;
            cout<<"1 "<<i+1<<endl;
            cout<<"1 "<<mp[i]<<endl;
            return 0;
        }
    }
    rep(i,n) v[i]=v[i]%200;
    set<ll> searched;
    REP(i,0,n){
        vector<ll> x(i+1);
        vector<ll> y(n-i-1);
        rep(j,i+1){
            x[j]=v[i]; 
        }
        REP(j,i+1,n){
            y[j-i+1]=v[j];
        }
    }

    


    return 0;
}
