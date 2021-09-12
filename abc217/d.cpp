// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
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
set<ll> s;
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll b,c,d,m,n,k,x,y,maxi=0,f=0,mini,sum=0;
    string str;
    ll l,q;
    cin>>l>>q;
    s.insert(0);
    s.insert(l);
    rep(i,q){
        cin>>b>>c;
        if(b==1){
            s.insert(c);
        }else{
            
            auto aft=s.upper_bound(c);
            auto bef=s.upper_bound(c);
            bef--;
            cout<<*aft-*bef<<endl;
        }
    }


    return 0;
}
