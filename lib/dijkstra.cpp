// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

struct Edge{
    ll to;
    ll d;
};
typedef pair<ll,ll> P;

// problem http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=ja

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll V,r;

    // Vがノード数aがedge数rが始点
    cin>>V>>a>>r;
    vector<Edge> Es[V];
    ll d[V];
    priority_queue<P,vector<P>,greater<P>> q;
    rep(i,a)   {
        // 無向グラフなら辺を逆向きにも張る 
        // 0-indexedで作ってあるので1-indexedの場合は1引く
        Edge e;
        cin>>b>>e.to>>e.d;
        Es[b].push_back(e);
        // swap(b,e.to);
        // Es[b].push_back(e);
    }
    rep(i,V) d[i]=INF;
    d[r]=0;
    q.push(P(0,r));
    while(!q.empty()){
        P p=q.top();
        q.pop();
        ll from=p.second;
        if(d[from]<p.first) continue;
        rep(i,Es[from].size()){
            Edge e=Es[from][i];
            if(d[from]+e.d<d[e.to]) {
                d[e.to]=d[from]+e.d;
                q.push(P(d[e.to],e.to));
            }
        }
    }
    rep(i,V) {
        if(d[i]==INF) cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    return 0;
}
