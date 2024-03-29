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
    cin>>V>>a;
    r=0;
    vector<Edge> Es[V];
    ll d[V];
    ll num[V];
    priority_queue<P,vector<P>,greater<P>> q;
    rep(i,a)   {
        Edge e;
        cin>>b>>e.to;
        b--;
        e.to--;
        e.d=1;
        Es[b].push_back(e);
        c=b;
        b=e.to;
        e.to=c;
        Es[b].push_back(e);
    }
    rep(i,V) d[i]=INF;
    rep(i,V) num[i]=0;
    num[0]=1;
    d[r]=0;
    q.push(P(0,r));
    while(!q.empty()){
        P p=q.top();
        q.pop();
        ll v=p.second;
        if(d[p.second]<p.first) continue;
        rep(i,Es[v].size()){
            Edge e=Es[v][i];
            if(d[e.to]>d[v]+e.d) {
                d[e.to]=d[v]+e.d;
                q.push(P(d[e.to],e.to));
                num[e.to]=num[v];
            }else if(d[e.to]==d[v]+e.d){
                num[e.to]+=num[v];
                num[e.to]%=mod;
                //cout<<num[e.to]<<" "<<d[v]<<endl;
            }
        }
    }

    cout<<num[V-1]<<endl;
    return 0;
}