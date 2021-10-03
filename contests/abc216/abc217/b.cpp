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
    vector<string> s;
    rep(i,3){
        string str;
        cin>>str;
        s.push_back(str);
    }
    sort(all(s));
    if(s[0]=="AGC"&&s[1]=="AHC"&&s[2]=="ARC") cout<<"ABC"<<endl;
    else if(s[0]=="ABC"&&s[1]=="AHC"&&s[2]=="ARC") cout<<"AGC"<<endl;
    else if(s[0]=="ABC"&&s[1]=="AGC"&&s[2]=="AHC") cout<<"ARC"<<endl;
    else cout<<"AHC"<<endl;

    return 0;
}
