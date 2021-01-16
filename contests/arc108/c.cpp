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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<vector<ll>> v(n);
    vector<ll> c(m);
    vector<ll> fir(m);
    vector<ll> sec(m);
    map<ll,ll> mp;
    rep(i,m){
        cin>>a>>b>>c[i];
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
        mp[c[i]]++;
    }
    if(n%2){
        rep(i,m){
            if(v[i]!=v[0]) {
            f=1;
            break;
            }
        }
        if(f==0) {
            No;
            return 0;
        }
    }f=0;
    ll startg;
    ll startn;
    rep(i,n+1){
        if(mp[i]==1) {
            rep(j,m){
                if(c[j]==i){
                    startg=j;
                    startn=i;
                    f=1;
                }
            }
        }
        if(f) break;
    }
    //startgをstartnで塗るところから
    bool checked[n];
    rep(i,n) checked[i]=false;
    deque<P> q;
    q.push_back(P(startg,startn));
    while(!q.empty()){
        P pa=q.front();
        q.pop_front();
        rep(i,v[pa.first].size()){
            rep(j,v[v[pa.first][i]].size()){
v[v[pa.first][i]]
            }
        }
    }




    return 0;
}
