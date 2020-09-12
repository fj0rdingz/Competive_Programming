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
    rep(_,loop){
        cin>>n;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        map<ll,ll> mp;
        rep(i,n) mp[v[i]]++;
        a=0;
        b=0;
        rep(i,105){
            if(mp[i]!=0){
                mp[i]--;
                a=i+1;
            }else{
                break;
            }
        }
        rep(i,105){
            if(mp[i]!=0){
                mp[i]--;
                b=i+1;
            }else{
                break;
            }
        }
        cout<<a+b<<endl;
    }


    return 0;
}
