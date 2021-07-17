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
    ll h,w; 
    cin>>h>>w;
    string s[h];
    rep(i,h)   cin >> s[i];
    rep(i,h){
        rep(j,w){
            if((i+j)%2==0){
                if(s[i][j]=='+') s[i][j]='-';
                else s[i][j]='+';
            }
            //cout<<s[i][j];
        }//ln;
    }
    ll dp[h+2][w+2];
    rep(i,h+2)rep(j,w+2) dp[i][j]=0;
    if(s[h-1][w-1]=='+') dp[h-1][w-1]=1;
    else dp[h-1][w-1]=-1;
    for(ll k=h+w-2;1<=k;k--){
        rep(i,k+1){
            if(h<i||w<k-i) continue;
            if((i+k-i)%2!=0){
                if(0<i&&0<k-i){
                    dp[i][k-i] = max(dp[i-1][k-i],dp[i][k-i-1]);
                    if(s[i][k-i]=='+') dp[i][k-i]++;
                    else dp[i][k-i]--;
                }else if(0<i){
                    dp[i][k-i] = dp[i-1][k-i];
                    if(s[i][k-i]=='+') dp[i][k-i]++;
                    else dp[i][k-i]--;
                }else if(0<k-i){
                    dp[i][k-i] = dp[i][k-i-1];
                    if(s[i][k-i]=='+') dp[i][k-i]++;
                    else dp[i][k-i]--;
                }
            }else{
                if(0<i&&0<k-i){
                    dp[i][k-i] = min(dp[i-1][k-i],dp[i][k-i-1]);
                    if(s[i][k-i]=='+') dp[i][k-i]++;
                    else dp[i][k-i]--;
                }else if(0<i){
                    dp[i][k-i] = dp[i-1][k-i];
                    if(s[i][k-i]=='+') dp[i][k-i]++;
                    else dp[i][k-i]--;
                }else if(0<k-i){
                    dp[i][k-i] = dp[i][k-i-1];
                    if(s[i][k-i]=='+') dp[i][k-i]++;
                    else dp[i][k-i]--;
                }
            }
        }
    }

    rep(i,h){
        rep(j,w){

        }
    }
        if(dp[0][0]>0){
            cout<<"Takahashi"<<endl;
        }else if(dp[h-1][w-1]==0){
            cout<<"Draw"<<endl;
        }else{
            cout<<"Aoki"<<endl;
        }
    

    return 0;
}
