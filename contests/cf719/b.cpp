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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    vector<ll> s(9);
    rep(i,9) s[i]=i+1;
    s.push_back(11);
    rep(j,10){
        for(ll i=1;i<9;i++){
            s.push_back(s[s.size()-9]*10+s[s.size()-9]%10);
           // cout<<s[s.size()-9]*10+s[s.size()-9]%10<<endl;
        }
    }

    rep(_,loop){
        cin>>n;
        sum=0;
        rep(i,s.size()){
            if(n>=s[i]) sum++;
        }
        cout<<sum<<endl;
    }


    return 0;
}
