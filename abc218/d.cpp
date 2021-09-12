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
    // secondがconflictする場合はfalseを返す
    return a.second < b.second;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<P> p(n);
    rep(i,n) {
        cin>>a>>b; 
        p[i]=P(a,b);
    }
    sort(all(p));
    multiset<P> ms;
    set<P> s;
    ll l=0;
    rep(i,n){
        if(i==0) continue;
        if(p[i].first!=p[i-1].first){
            for(ll j=l;j<=i-1;j++){
                for(ll k=j+1;k<=i-1;k++){
                    if(k==j) continue;
                    ms.insert(P(p[j].second,p[k].second));
                    s.insert(P(p[j].second,p[k].second));
                  //  cout<<i<<" "<<p[j].second<<" "<<p[k].second<<" "<<endl;
                }
            }
        l=i;
        }else if(i==n-1){
            i++;
            for(ll j=l;j<=i-1;j++){
                for(ll k=j+1;k<=i-1;k++){
                    if(k==j) continue;
                    ms.insert(P(p[j].second,p[k].second));
                    s.insert(P(p[j].second,p[k].second));
                  //  cout<<i<<" "<<p[j].second<<" "<<p[k].second<<" "<<endl;
                }
            }
        }
    }
    for(auto itr=s.begin();itr!=s.end();++itr){
        sum+=ms.count(*itr)*(ms.count(*itr)-1)/2;
    }
    cout<<sum<<endl;
    return 0;
}
