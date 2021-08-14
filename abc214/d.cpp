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
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        // どちらも同じ
        return true;
    }
    
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    dsu uf(n);
    vector<P> p(n-1);
    vector<P> e(n-1);
    rep(i,n-1){
        cin>>a>>b>>c;
        a--;
        b--;
        p[i].first=c;
        p[i].second=i;
        e[i].second=a;
        e[i].first=b;
    }
    sort(all(p),comp);
    rep(i,n-1){
        if(!uf.same((e[p[i].second].first),(e[p[i].second].second)))sum+=p[i].first*uf.size(e[p[i].second].first)*uf.size(e[p[i].second].second);
        if(!uf.same((e[p[i].second].first),(e[p[i].second].second)))uf.merge((e[p[i].second].first),(e[p[i].second].second));
    }
    cout<<sum<<endl;

    return 0;
}
s