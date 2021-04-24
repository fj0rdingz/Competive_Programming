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
ll len=12;
vector<string> strs;

void gen(string str){
    if(str.length()==len) strs.push_back(str);
    else{
        gen(str+'W');
        gen(str+'B');
        gen(str+'R');
    }
    return;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    cin>>str;
    map<string,char> mp;
    string ff;
    gen(ff);
    char dp[11][12];
    rep(i,strs.size()){
        rep(j,12) dp[0][j]=strs[i][j];
        rep(j,12) {
            rep(k,j-1){
                if(dp[j][k]=='B'&&dp[j][k+1]=='W'||dp[j][k]=='W'&&dp[j][k+1]=='B'||dp[j][k]=='R'&&dp[j][k+1]=='R') dp[j+1][k]='R';
                else if(dp[j][k]=='R'&&dp[j][k+1]=='W'||dp[j][k]=='W'&&dp[j][k+1]=='R'||dp[j][k]=='B'&&dp[j][k+1]=='B') dp[j+1][k]='B';
                else dp[j+1][k] = 'W';
            }
        }
        if(i==10000){
                    cout<<strs[i]<<endl;
                rep(j,12) {
                    rep(k,j){
                        cout<<dp[j][k];
                    }ln;
            }
        }
        mp[strs[i]]=dp[11][0];
    }
    

    return 0;
}
