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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    vector<vector<ll>> val(n,vector<ll> (0));
    vector<ll> v(n);
    map<ll,ll> mp[n];
    rep(i,n)   cin >> v[i];
    mp[0][v[0]]++;
    val[0].push_back(v[0]);
    for(ll i=1;i<n;i++){
       // if(v[i-1]>v[i]){
       //     val[i].push_back(v[i]);
       //     mp[i][v[i]]++;
       // }else{
            val[i].push_back(v[i]);
            mp[i][v[i]]++;
            rep(j,val[i-1].size()){
               // if(val[i-1][j]-v[i]>0){
                    val[i].push_back(val[i-1][j]-v[i]);
                    mp[i][val[i-1][j]-v[i]]++;
                    if(val[i-1][j]-v[i]==0) sum++;
               // }
            }
            mp[i][v[i]]++;
      //  }
        cout<<i<<" ";
        rep(j,val[i].size()) cout<<val[i][j]<<" ";
        ln;
    }
    cout<<sum<<endl;
    return 0;
}
