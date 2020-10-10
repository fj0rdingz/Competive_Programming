// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
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
    cin>>n>>str;
    string temp;
    ll start=0;
    ll comps=0;
    ll cur=0;
    ll anss[2500];
    anss[0]=0;
    for(ll i=1;i<2500;i++){
        anss[i]=anss[i-1]+i;
    }
    while(start<n){
        cur=0;
        for(ll j=start;j<n;j+=2){
            if(str[j]=='A'&&str[j+1]=='T'||str[j]=='T'&&str[j+1]=='A'||str[j]=='C'&&str[j+1]=='G'||str[j]=='G'&&str[j+1]=='C'){
                cur++;
            }else{
                start=j+=2;
                break;
            }
        sum+=anss[cur];
        }
    }
    start=1;
    while(start<n){
        cur=0;
        for(ll j=start;j<n;j+=2){
            if(str[j]=='A'&&str[j+1]=='T'||str[j]=='T'&&str[j+1]=='A'||str[j]=='C'&&str[j+1]=='G'||str[j]=='G'&&str[j+1]=='C'){
                cur++;
            }else{
                start=j+=2;
                break;
            }
        sum+=anss[cur];
        }
    }
    cout<<sum<<endl;
    return 0;
}
