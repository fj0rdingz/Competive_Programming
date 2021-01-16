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
ll n;
set<ll> chk;
vector<vector<ll>> v(100);
vector<ll> val(200);
vector<ll> mini(200);
void dfs(ll num,ll curmin){
    if(chk.find(num)!=chk.end()) return;
    else chk.insert(num);
    cout<<"curmin "<<num<<" "<<curmin<<endl;
    mini[num] =min(curmin,val[num]);
    for(auto itr=v[num].begin();itr!=v[num].end();++itr){
        if(chk.find(v[num][*itr])!=chk.end()) continue;
        cout<<"do dfs"<<v[num][*itr]<<" "<<mini[num]<<endl;
        dfs(v[num][*itr],mini[num]);
    }
    return;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,sum=0;
    string str;
    cin>>n>>m;
    v.resize(n);
    val.resize(n);
    mini.resize(n);
    rep(i,n)   cin >> val[i];
    rep(i,m){
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
    }
    rep(i,v.size()){
        cout<<i<<" : ";
        rep(j,v[i].size()){
            cout<<v[i][j]<<" ";
        }
        ln;
    }
    rep(i,n){
        dfs(i,val[i]);
    }
    rep(i,n){
        cout<<mini[i]<<" "<<val[i]<<endl;
        maxi=max(maxi,val[i]-mini[i]);
    }
    cout<<maxi<<endl;


    return 0;
}
