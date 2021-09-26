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
typedef pair<ll,string> P;
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool comp(pair<ll, string> a, pair<ll , string> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
       // return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    // secondがconflictする場合はfalseを返す
    return a.second > b.second;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>str>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<string> v(n);
    rep(i,n)   cin >> v[i];
    vector<P> p(n);
    sort(all(v));
    rep(i,n) {
        ll start = 1;
        rep(j,11) start*=30;
        ll cursum = 0;
        rep(j,v[i].length()){
            rep(k,str.length()) {
                if(v[i][j]==str[k]) cursum+=(k+1)*start;
            }
            start/=30;
        }
        p[i]=P(cursum,v[i]);
    }
    sort(all(p),comp);
    rep(i,n) cout<<p[i].second<<endl;

    return 0;
}