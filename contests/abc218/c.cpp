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
    cin>>n;
    string s[n];
    string t[n];
    rep(i,n) cin>>s[i];
    rep(i,n) cin>>t[i];
    set<P> st;
    set<P> tt;

    rep(i,n){
        rep(j,n){
            if(s[i][j]=='#') {
                st.insert(P(i,j));
            }
        }
    }
    rep(i,n){
        rep(j,n){
            if(t[i][j]=='#') {
                tt.insert(P(i,j));
            }
        }
    }
    if(st.size()!=tt.size()){
        No;
        return 0;
    }
    bool f1=true;
    bool f2=true;
    bool f3=true;
    bool f4=true;
    
    for(auto itr=st.begin();itr!=st.end();++itr){
        for(ll i=-200;i<=200;i++){
            if(tt.find(P(((*itr).first)+i,((*itr).second)+i))==tt.end())f1 =false;
            if(tt.find(P(((*itr).first)-i,((*itr).second)+i))==tt.end())f2 =false;
            if(tt.find(P(((*itr).first)-i,((*itr).second)-i))==tt.end())f3 =false;
            if(tt.find(P(((*itr).first)+i,((*itr).second)-i))==tt.end())f4 =false;
        }
    }
    if(f1||f2||f3||f4) Yes;
    else No;
    return 0;
}
