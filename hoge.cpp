// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
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
vector<ll> x;
vector<ll> y;
void dfs(ll num,ll curx,ll cury){
    if(num==100) return;
    if(curx==x[num]&&cury==y[num]) {
        cout<<"I";
        dfs(num+1,curx,cury);
    }
    else if(curx<x[num]) {
        cout<<"R";
        dfs(num,curx+1,cury);
    }else if(curx>x[num]){
        cout<<"L";
        dfs(num,curx-1,cury);
    }else if(cury<y[num]){
        cout<<"D";
        dfs(num,curx,cury+1);
    }else if(cury>y[num]){
        cout<<"U";
        dfs(num,curx,cury-1);
    }else{
        assert(0);
    }
    return;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,maxi=0,f=0,mini=INF,sum=0;
    string str;
    n=100;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    x.resize(n);y.resize(n);
    rep(i,n) cin>>y[i]>>x[i];
    dfs(0,0,0);

    return 0;
}