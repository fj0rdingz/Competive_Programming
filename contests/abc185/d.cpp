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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;

    vector<ll> v(m);
    rep(i,m)   cin >> v[i];
    if(m==0){
        cout<<1<<endl;
        return 0;
    }
    if(n==m){
        cout<<0<<endl;
        return 0;
    }
    sort(all(v));
    vector<ll> w(m+1);
    rep(i,m-1) w[i]=v[i+1]-v[i]-1;
    w[m-1]=v[0]-1;
    w[m]=n-v[m-1];
    sort(all(w));
    ll size;
    rep(i,m+1){
        if(w[i]<0) w[i]= 0;
        if(w[i]>0) {
            size=w[i];
            break;
        }
    }
   // cout<<size<<endl;
    rep(i,m+1){
        sum+=w[i]/size;
        if(w[i]%size) sum++;
    }
    cout<<sum<<endl;


    return 0;
}
