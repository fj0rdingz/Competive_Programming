// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX/2
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
typedef tuple<ll,ll,ll> T;

// problem http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=ja

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll V,r;
    ll y;
    // Vがノード数aがedge数rが始点yが終点
    cin>>V>>a>>r>>y;
    r--;y--;
    vector<Edge> Es[V];
    ll d[V];
    priority_queue<P,vector<P>,greater<P>> q;
    map<T,ll> mp;
    rep(i,a){
        Edge e;
        cin>>b>>e.to>>e.d>>c;
        b--;
        e.to--;
        Es[b].push_back(e);
        T tu=T(b,e.to,e.d);
        mp[tu]=c;
        mini=b;
        b=e.to;
        e.to=mini;
        Es[b].push_back(e);
        tu=T(b,e.to,e.d);
        mp[tu]=c;
    }
    rep(i,V) d[i]=INF;
    d[r]=0;
    q.push(P(0,r));
    while(!q.empty()){
        P p=q.top();
        q.pop();
        ll v=p.second;
        if(d[p.second]<p.first) continue;
        //if(d[v]!=r) continue;
        rep(i,Es[v].size()){
            Edge e=Es[v][i];
            ll add=0;
            T tu=T(v,e.to,e.d);
            if((d[v])%mp[tu]!=0) add=mp[tu]-(d[v])%mp[tu];
            if(d[e.to]>d[v]+e.d+add) {
                d[e.to]=d[v]+e.d+add;
                q.push(P(d[e.to],e.to));
            }
        }

    }
   // rep(i,V){
   //     cout<<i<<" "<<d[i]<<endl;
   // }
    if(d[y]==INF) cout<<"-1"<<endl;
    else cout<<d[y]<<endl;
    
    return 0;
}
