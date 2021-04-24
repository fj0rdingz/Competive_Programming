// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll int
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
vector<ll> c(1);
vector<bool> ans(1);
vector<vector<ll>> v(1,vector<ll> (0));
vector<int> check(100007);
void dfs(int par,int cur){
    if(check[c[cur]]<1){
        ans[cur]=true;
    }else{
        ans[cur] = false;
    }
    check[c[cur]]++;
    //cout<<"checking "<<cur<<" "<<endl;
    //cout<<"now check true num is :";
    //rep(i,check.size()) if(check[i]) cout<<i+1<<" ";
    //ln;
    rep(i,v[cur].size()){
        if(v[cur][i]!=par){
            dfs(cur,v[cur][i]);
        }
    }
        check[c[cur]]--;
    return;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    c.resize(n);
    v.resize(n);
    ans.resize(n);
    rep(i,n)   cin >> c[i];
    rep(i,n-1){
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    rep(i,100007) check[i]=0;
    dfs(-1,0);
    rep(i,n) if(ans[i]) cout<<i+1<<endl;


    return 0;
}
