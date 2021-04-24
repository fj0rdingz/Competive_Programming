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

    ll a,c,d,m,n,k,x,y,maxi=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //true=前とかける false=かけない
    vector<ll> v(n);
    vector<ll> f(n-1); 
    rep(i,n)   cin >> v[i];
    rep(i,1<<(n-1)){
        sum=0;
        vector<ll> b;
        b.push_back(v[0]);
        rep(j,n-1){
            if(i&(1<<j)) b[b.size()-1]=b[b.size()-1]|v[j+1];
            else b.push_back(v[j+1]);
        }
        //rep(i,b.size()) cout<<b[i]<<" ";
        //ln;
        rep(i,b.size()) sum^=b[i];
        mini=min(mini,sum);
    }
    cout<<mini<<endl;
    return 0;
}
