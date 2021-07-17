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
vector<bool> dist(0);
vector<ll> check(0);
vector<vector<ll>> v(100,vector<ll> (0));
void dfs(ll par,ll cur,bool tf){
    if(check[cur]==1) return;
    check[cur]=1;
    dist[cur]=tf;
    for(auto itr=v[cur].begin();itr!=v[cur].end();++itr){
        if(*itr!=par&&check[*itr]==0){
            if(tf==false) dfs(cur,*itr,true);
            else dfs(cur,*itr,false);
        }
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll q;
    cin>>n>>q;
    v.resize(n);
    dist.resize(n);
    check.resize(n);
    dist[0]=0;
    rep(i,n-1){
        cin>>a>>b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // false=0 true=1;
    dfs(-1,0,false);
    check[0]=1;
    rep(i,q){
        cin>>c>>d;
        c--;d--;
        if(dist[c]&&dist[d]||!dist[c]&&!dist[d]) cout<<"Town"<<endl;
        else cout<<"Road"<<endl;
    }

    return 0;
}
/*
ABC209お疲れさまでした
29分4完でした
A B はい
C 昇順にソートしてi番目から(i-1)を引いて全部かける
D 適当な点からDFSして偶奇を取る
*/