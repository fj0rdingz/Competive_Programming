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
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    vector<P> p(m);
    rep(i,m){
        cin>>a>>b;
        p[i]=P(b,a);
    }
    sort(all(p),comp);

    if(n%min(p[0].second,n-p[0].second)){
        cout<<(n-1)*p[0].first<<endl;
        return 0;
    }
    sum+=(n/(n/min(p[0].second,n-p[0].second)))*(n/(min(p[0].second,n-p[0].second))-1)*p[0].first;
    ll neededge=n-(n/(n/min(p[0].second,n-p[0].second)))*(n/(min(p[0].second,n-p[0].second))-1)-1;

    REP(i,1,m){
        if(p[0].second!=min(p[i].second,n-p[i].second)){
            sum+=neededge*p[i].first;
            cout<<sum<<endl;
            return 0;
        }
    }
    
    cout<<-1<<endl;

    return 0;
}
