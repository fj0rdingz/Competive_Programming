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
vector<vector<ll>> v(2005,vector<ll> (0));
ll ans =0;
vector<set<ll>> s(0);

void search(ll par,ll cur){
   // cout<<par<<" "<<cur<<endl;
    rep(i,v[cur].size()){
        if(s[par].find(v[cur][i])==s[par].end()){
            ans++;
            s[par].insert(v[cur][i]);
            search(par,v[cur][i]);
        }
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
   // vector<vector<ll>> v(n,vector<ll> (0));
    v.resize(n);
    s.resize(n);
    rep(i,m) {
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
    }/*
    rep(i,n){
        cout<<i<<" : ";
        rep(j,v[i].size()){
            cout<<v[i][j]<<" ";
        }ln;
    }*/
    rep(i,n){
        s[i].insert(i);
        search(i,i);
        ans++;
    }
    cout<<ans<<endl;/*
    rep(i,n){
        cout<<i<<" : ";
        for(auto itr=s[i].begin();itr!=s[i].end();++itr){
            cout<<*itr<<" ";
        }ln;
    }
*/
    return 0;
}
