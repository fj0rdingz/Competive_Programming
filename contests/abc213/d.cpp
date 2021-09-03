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
vector<bool> vid(0);
vector<vector<ll>> v(0,vector<ll> (0));
void dfs(ll cur, ll last){
    if(cur==0&&vid[cur]){
        cout<<cur+1<<" "<<endl;
        return;
    }
    cout<<cur+1<<" ";
    vid[cur]=true;
    for(auto itr = v[cur].begin();itr!=v[cur].end();++itr){
        if(vid[*itr]==false){
            dfs(*itr,cur);
            cout<<cur+1<<" ";
        }
    }
    return;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    v.resize(n);
    vid.resize(n);
    rep(i,n-1){
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    rep(i,n) sort(all(v[i]));
    rep(i,n) vid[i]=false;
    dfs(0,-1);
    ln;
    return 0;
}
