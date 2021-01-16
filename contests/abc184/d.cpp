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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF;
    long double sum=0;
    string str;
    cin>>a>>b>>c; 
    val=0;
    val++;
    if(b!=0) val++;
    if(c!=0) val++;
    ll count=0;
    while(a<100&&a!=0){
        sum+=(long double)a/(a+b+c+(count*val/3));
        count++;
        a++;
    }    val=0;
    val++;
    if(a!=0) val++;
    if(c!=0) val++;
    ll count=0;
    while(b<100&&b!=0){
        sum+=(long double)b/(a+b+c+(count*val/3));
        count++;b++;
    }    
    val=0;
    val++;
    if(b!=0) val++;
    if(a!=0) val++;
    ll count=0;
    while(c<100&&c!=0){
        sum+=(long double)c/(a+b+c+(count*val/3));
        count++;c++;
    }
    printf("%Lf.10\n",sum);

    return 0;
}
