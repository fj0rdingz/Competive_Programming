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
    cin>>str;
    ll size=200000;
    char temp[size];
    rep(i,size){
        if(i%3==0||i%3==1) temp[i]='1';
        else temp[i]='0';
    }

    ll start;
    for(ll i=0;i<3;i++){
        f=1;
        for(ll j=i;j<n+i;j++){
            if(j>=size){
                f=0;break;
            }
            if(str[j-i]!=temp[j]){
                f=0;
                break;
            }
        }
        if(f) {
            start=i;
            break;
        }
    }
    if(f==0) {
        cout<<0<<endl;
        return 0;
    }
    if(n==1){
        if(str[0]=='0')cout<<10000000000<<endl;
        else cout<<20000000000<<endl;
        return 0;
    }else if(n==2){
        if(str[0]=='0'&&str[1]=='1') cout<<9999999999<<endl;
        else if(str[0]=='0'&&str[1]=='0') cout<<0<<endl;
        else cout<<10000000000<<endl;
        return 0;
    }else{
        a=0;
        rep(i,n){
            if(str[i]=='0') a++;
        }
        if(str[n-1]=='0')cout<<10000000000-a+1<<endl;
        else cout<<10000000000-a<<endl;
    }
    return 0;
}
