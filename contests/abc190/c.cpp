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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    vector<ll> a(m);
    vector<ll> b(m);
    rep(i,m) cin>>a[i]>>b[i];
    rep(i,m) {
        a[i]--;
        b[i]--;
    }

    cin>>k;
    vector<ll> c(k);
    vector<ll> d(k);
    rep(i,k) cin>>c[i]>>d[i];
    rep(i,k) {
        c[i]--;d[i]--;    
    }
    vector<ll> v(n);
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    for (ll hbit = 0; hbit < (1<<k); ++hbit) {
        sum=0;
        rep(j,n) v[j]=0;
        for (int i = 0; i < k; ++i) {
            if (hbit & (1<<i)) { // 列挙に i が含まれるか
                v[c[i]]++;
            }else{
                v[d[i]]++;
            }
        }
        //rep(j,n) cout<<v[j]<<" ";
       // ln;
        rep(l,m){
            if(v[a[l]]>=1&&v[b[l]]>=1) sum++;
        }
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
