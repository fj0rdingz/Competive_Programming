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
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    rep(i,n)   cin >> v[i];
    rep(i,n){
        f=0;
        ll cursum=0;
        for(ll j=i+1;j<n;j++){
            if(v[j]<v[i]){
                cursum=(j-i)*v[i];
                f=1;
                break;
            }
        }
        if(f==0) cursum=(n-i)*v[i];

        f=0;
        ll cursum2=0;
        for(ll j=i-1;j>=0;j--){
            if(v[j]<v[i]){
                cursum2=(i-j-1)*v[i];
                f=1;
                break;
            }
        }
        if(f==0) cursum2=i*v[i];
        sum=max(cursum+cursum2,sum);
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;

    return 0;
}
