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
/*

型を使いたいように合わせる！！！！！！！！！！！！！！！！！！！！！！！！！！！！

*/
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

    ll c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> a(n);
    vector<ll> b(n);
    vector<P> A(n);
    vector<P> B(n);
    rep(i,n)   cin >> a[i]>>b[i];
    rep(i,n){
        A[i]=P(a[i],i);
        B[i]=P(b[i],i);
    }
    sort(all(A),comp);
    sort(all(B),comp);
    if(A[0].second==B[0].second){
        cout<<min(A[0].first+B[0].first,min(max(A[0].first,B[1].first),max(A[1].first,B[0].first)))<<endl;
    }else{
        cout<<max(A[0].first,B[0].first)<<endl;
    }

    return 0;
}
