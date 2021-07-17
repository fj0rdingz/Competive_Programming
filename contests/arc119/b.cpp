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
    string s1,s2;
    cin>>n>>s1>>s2;
    ll zero1=0;ll zero2=0;
    vector<ll> lzeros;
    vector<ll> rzeros;
    rep(i,n){
        if(s1[i]=='0') zero1++;
        if(s2[i]=='0') zero2++;
        if(zero1!=zero2&&lzeros.size()==rzeros.size()){
            lzeros.push_back(i);
        }
        if(zero1==zero2&&lzeros.size()!=rzeros.size()){
            rzeros.push_back(i);
        }
    }
    if(zero1!=zero2){
        cout<<-1<<endl;
        return 0;
    }
    ll zero3=0;
    for(ll j=0;j<lzeros.size();j++){
        for(ll i=lzeros[j];i<=rzeros[j];i++){
            if(s1[i]=='0') zero3++;    
        }
    }

    cout<<zero3<<endl;

   // cout<<l<<" "<<r<<" "<<sum<<endl;

    return 0;
}
