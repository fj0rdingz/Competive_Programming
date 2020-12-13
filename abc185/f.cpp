// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll int
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
 
int op(int a, int b) { return a^b; }
 
int e() { return 0; }
 
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
 
    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,sum=0;
    string str;
    ll q;
    int hoge=0;
    cin>>n>>q;
    vector<ll> v(n);
    ll size=300020;
    segtree<int, op, e> seg(size);
    rep(i,size) seg.set(i,0);
    rep(i,n){
        cin>>a;
        seg.set(i,a);
       // cout<<seg.get(i)<<" ";
    }//ln;
    rep(i,q){
        cin>>a>>b>>c;
        
        if(a==1){
            b--;
            d=seg.get(b);
            seg.set(b,c^d);
          //  rep(j,n){
          //      cout<<seg.get(j)<<" ";
          //  }ln;
        }else{
            b--;c--;
            cout<<seg.prod(b,c+1)<<endl;
        }
    }
 
    return 0;
}