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
bool comp(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    // secondがconflictしない場合は入れておいたほうが良い
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>m;
    rep(_,m){
        cin>>n;
        set<ll> s;
        vector<P> p(n);
        rep(i,n){
            cin>>a>>b;
            s.insert(a);
            p[i]=P(a,b);
        }
        set<P> pq[s.size()];
        sort(all(p),comp);
        auto itr=s.begin();
        ll num=0;
        rep(i,n){
            if(p[i].first!=*itr) {
                ++itr;
                num++;
            }
            pq[num].insert(p[i]);
        }
        auto la=(pq[0].begin());
        ll l=(*la).first;
        ll r=(*la).second;
        priority_queue<ll,vector<ll>,greater<ll>> q;
        rep(i,s.size()){
            for(auto itr=pq[i].begin();itr!=pq[i].end();++itr){
                q.push((*itr).second);
            }
            auto la=(pq[0].begin());
            
        }


    }

    return 0;
}
