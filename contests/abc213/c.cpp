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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll h,w;
    cin>>h>>w>>n;
    map<ll,ll> mpa;
    map<ll,ll> mpb;
    set<ll> as;
    set<ll> bs;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    vector<ll> d(n);
    rep(i,n){
        cin>>a[i]>>b[i];
        c[i]=a[i];d[i]=b[i];
        as.insert(a[i]);bs.insert(b[i]);
    }
    a.resize(as.size());
    b.resize(bs.size());
    ll i=0;
    for(auto itr=as.begin();itr!=as.end();++itr){
        a[i]=*itr;
        i++;
    }
    i=0;
    for(auto itr=bs.begin();itr!=bs.end();++itr){
        b[i]=*itr;
        i++;
    }    
    sort(all(a));sort(all(b));
    rep(i,a.size()){
        mpa[a[i]]=i+1;
    }
    rep(i,b.size()){
        mpb[b[i]]=i+1;
    }
    rep(i,n){
        cout<<mpa[c[i]]<<" "<<mpb[d[i]]<<endl;
    }


    return 0;
}
