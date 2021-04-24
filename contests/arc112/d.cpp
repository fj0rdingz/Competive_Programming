// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#include <atcoder/all>
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
using namespace atcoder;
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
//    UnionFind t(n+1);で初期化する!!!!!!!(n番目の値が入ってきたときにせぐふぉする)


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    ll h,w;
    cin>>h>>w;
    string str[h];
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    dsu uf(h*w);
    str[0][0]='#';
    str[0][w-1]='#';
    str[h-1][w-1]='#';
    str[h-1][0]= '#';
    rep(i,h)   cin >> str[i];
    rep(i,h){
        ll par=-1;
        rep(j,w){
            if(str[i][j]=='#'){
                if(par==-1){
                    par=i;
                }else{
                    uf.merge(i*h+j,i*h+par);
                }
            }
        }
    }
    rep(j,w){
        ll par=-1;
        rep(i,h){
            if(str[i][j]=='#'){
                if(par==-1){
                    par=j;
                }else{
                    uf.merge(i*h+j,par*h+j);
                }
            }
        }
    }
    ll ans=0;
    set<ll> pars;
    set<ll> ansh;
    set<ll> answ;
    ansh.insert(0);
    ansh.insert(h-1);
    answ.insert(0);
    answ.insert(w-1);
    pars.insert(uf.leader(0));
    rep(i,h){
        rep(j,w){
            if(uf.same(0,h*i+j)){
                ansh.insert(i);
                answ.insert(j);
            }
        }
    }
    ll first=max(h-ansh.size(),w-answ.size());
    vector<vector<int>> v= uf.groups();
    rep(i,v.size()){
        if(v[i].size()==1) continue;
        ll cur=max(h-ansh.size(),w-answ.size());
        rep(j,v[i].size()){
            if(str[v[i][j]/h][v[i][j]%h]=='.') continue;
            ansh.insert(v[i][j]/h);
            answ.insert(v[i][j]%h);
        }
        ll cost=max(h-ansh.size(),w-answ.size());
        if(cost-1<<cur) sum+=cur-(cost-1);
    }
    cout<<first-sum<<endl;
    return 0;
}
