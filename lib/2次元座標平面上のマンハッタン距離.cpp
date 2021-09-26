// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF 1001001001
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
ll h,w,q;
vector<string> str(0);
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll m,n,k,x,y,maxi=0,mini=INF,sum=0;
    ll q;
    cin>>n;
    vector<P> p(n);
    P lu,ld,ru,rd;
    lu=P(INF,-INF); //first x second y
    ld=P(INF,INF);
    ru=P(-INF,-INF);
    rd=P(-INF,INF);
    rep(i,n){
        ll a,b;
        cin>>a>>b;
        p[i]=P(a,b);
        if((lu.first-lu.second)>a-b) lu=p[i];
        if((ld.first+ld.second)>a+b) ld=p[i];
        if((ru.first+ru.second)<a+b) ru=p[i];
        if((rd.first-rd.second)<a-b) rd=p[i];
    }
    rep(i,n){
        ll a=i;
        
        maxi=max(max(abs(p[a].first-lu.first)+abs(p[a].second-lu.second)
             ,max(abs(p[a].first-ld.first)+abs(p[a].second-ld.second)
             ,max(abs(p[a].first-ru.first)+abs(p[a].second-ru.second)
             ,abs(p[a].first-rd.first)+abs(p[a].second-rd.second)))),maxi);
    }
    cout<<maxi<<endl;




    return 0;
}
