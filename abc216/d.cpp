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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    vector<vector<ll>> v(m,vector<ll> (0));
    rep(i,m){
        cin>>a;
        v[i].resize(a);
        rep(j,a) cin>>v[i][j];
    }
    vector<ll> ptr(m,0);
    ll erased=0;
    ll color=1;
    ll lasterase=-1;
    while(1){
        if(color==1) color=2;
        else color=1;
        ll lasti=0;
        rep(i,m){
            while(ptr[i]!=(ll)(v[i].size())&&v[i][ptr[i]]==color){
                                //            cout<<i<<" "<<ptr[i]<<" "<<v[i][ptr[i]]<<" "<<color<<endl;
                ptr[i]++;
                erased++;
                lasti=i;
            }
        }
        if(erased%2) {
            ptr[lasti]--;
            erased--;
        }
        if(lasterase==erased) break;
        lasterase=erased;
    }
    rep(i,m){
      //  cout<<"iplace :"<<i<<" "<<ptr[i]<<endl;
    }
    if(erased==n*2) Yes;
    else No;

    return 0;
}
