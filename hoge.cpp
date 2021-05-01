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
ll ans = 0;
ll n;
set<vector<char>> s;
vector<vector<ll>> v(1,vector<ll> (0));
bool check(vector<char> col){
    rep(j,n){
        rep(i,v[j].size()){
            if(col[j]==col[v[j][i]]) return false; 
        }
    }
    return true;
}

void solve(ll par,ll cur,vector<char> col){
    ll f=0;
    rep(i,col.size()){
        if(col[i]!='R'&&col[i]!='G'&&col[i]!='B'&&col[i]!='Y') {
            s.insert(col);
        }
    }
    rep(i,v[cur].size()){
        if(v[cur][i]!=par&&col[v[cur][i]]=='X'){
            if(col[cur]!='R'){
                col[v[cur][i]]='R';
                solve(cur,v[cur][i],col);
            }
            if(col[cur]!='G'){
                col[v[cur][i]]='G';
                solve(cur,v[cur][i],col);
            }
            if(col[cur]!='B'){
                col[v[cur][i]]='B';
                solve(cur,v[cur][i],col);
            }
        }
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll q;
    cin>>n>>m;
    //vector<vector<ll>> v(n,vector<ll> (0));
    v.resize(n);
    rep(i,m){
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<char> col(n);
    rep(i,n) col[i]='X';
    rep(i,n) if(v[i].size()==0) col[i]='Y';
    rep(i,n){
        if(v[i].size()) {
            col[i]='R';
            solve(-1,i,col);
            break;
        }
    }
    for(auto itr=s.begin();itr!=s.end();++itr){
        if(check(*itr))ans++;
    }
    if(m==0){
        ans=1;
        rep(i,n) ans*=3;
    }else{
        ans*=3;
        rep(i,n) if(col[i]=='Y') ans*=3;
    }
    cout<<ans<<endl;



    return 0;
}   
