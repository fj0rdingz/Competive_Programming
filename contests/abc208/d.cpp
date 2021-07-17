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
bool comp(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
    }
    return true;
    
}
// problem http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=ja

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll V,r;
    ll A,B,C;
    // Vがノード数aがedge数rが始点
    cin>>V>>a;
    vector<Edge> Es[V];
    ll d[V];
    priority_queue<P,vector<P>,greater<P>> q;
    //辺を追加する単位のループ
    map<P,ll> mp;
    vector<P> p(a);
    rep(i,a){
        cin>>A>>B>>C;
        A--;B--;
        p[i]=P(A,B);
        mp[p[i]]=C;
    }
    sort(all(p),comp);
    ll ind=0;
    REP(j,0,V){
        // 辺を追加
        for(;ind<a;ind++)   {
            if(p[ind].first!=j) break;
            Edge e;
            //cin>>b>>e.to>>e.d;
            b=p[ind].first;
            e.to=p[ind].second;
            e.d=mp[p[ind]];
            Es[b].push_back(e);
        }
        REP(r,0,V){
            rep(i,V) d[i]=INF;
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
                    }
                }
            }
            rep(i,V) {
                if(d[i]!=INF&&r!=i) sum+=min(d[i],mp[P(r,i)]);
                else if(mp[P(r,i)]!=0&&r!=i) sum+=mp[P(r,i)];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
