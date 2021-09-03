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
    cin>>n>>k;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    sort(all(v));
    ll l=0,r=INF/2-10;
    ll buk=k;
    ll mid;
    rep(_,300){
        k=buk;
        mid= (l+r)/2;
        vector<ll> w(n);
        rep(i,n) w[i]=v[i];
        rep(i,n){
            if(w[i]*2>=l+r){  //要確認
                k-=(w[i]*2-(l+r))/2;
                if((w[i]*2-(l+r))%2==0) k--;
            }
        }
        if(k>0) r=mid;
        else l=mid;
    }
   // cout<<mid<<endl;
    ll calced=0;
    a=mid;
    rep(i,n){
        if(v[i]>a){
            sum+=(v[i]+(a+1))*(v[i]-(a+1)+1)/2;
            calced+=v[i]-(a+1)+1;
         //   cout<<sum<<" added:"<<(v[i]+(mid+1))*(v[i]-(mid+1)+1)/2<<"addednum:"<<v[i]-(mid+1)+1<<" curnum:"<<calced<<endl;
        }
    }
    sum+=a*(buk-calced);
    cout<<sum<<endl;

    return 0;
}
