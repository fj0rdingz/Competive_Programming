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
    cin>>n>>k;
    set<ll> s;
    map<ll,ll> mp;
    rep(i,n){
        cin>>a>>b;
        mp[a]+=b;
        s.insert(a);
    }
    vector<P> p(s.size());
    ll i=0;
    for(auto itr=s.begin();itr!=s.end();++itr){
        p[i]=P(*itr,mp[*itr]);
        i++;
    }
    sort(all(p),comp);
    ll money=k;
    ll num=0;
    rep(i,s.size()){
        if(money<p[i].first){
            cout<<money<<endl;
            return 0;
        }else{
            money+=p[i].second;
            num+=p[i].first;
        }
    }
    cout<<money<<endl;

    return 0;
}
