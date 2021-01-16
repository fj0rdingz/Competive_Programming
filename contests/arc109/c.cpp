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
    cin>>n>>k>>str;
    char s[200];
    for(ll i=0;i<200;i++){
        s[i]=str[i%n];
    }
    //cout<<s<<endl;
    for(ll i=0;i<k;i++){
        rep(j,100){
            if(s[j*2]=='R'&&s[j*2+1]=='R') s[j]='R';
            else if(s[j*2]=='P'&&s[j*2+1]=='P') s[j]='P';
            else if(s[j*2]=='S'&&s[j*2+1]=='S') s[j]='S';
            else if(s[j*2]=='R'&&s[j*2+1]=='P'||s[j*2]=='P'&&s[j*2+1]=='R') s[j]='P';
            else if(s[j*2]=='R'&&s[j*2+1]=='S'||s[j*2]=='S'&&s[j*2+1]=='R') s[j]='R';
            else if(s[j*2]=='P'&&s[j*2+1]=='S'||s[j*2]=='S'&&s[j*2+1]=='P') s[j]='S';
           // cout<<j*2<<" "<<j*2+1<<" "<<s[j*2]<<s[j*2+1]<<" "<<s[j]<<endl;
        }
        rep(j,100) s[100+j]=s[j];
        //cout<<s<<endl;
    }
    cout<<s[0]<<endl;
    return 0;
}
