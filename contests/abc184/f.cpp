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
//int dp[3000][60000];
vector<int> w(2000);
vector<int> v(2000);

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    int maxi=0,f=0,sum=0;
    string str,str1,str2;
    int i;
    double h;
    int n,x,m;
    int a,b,d,c;
    int e,weight;
    map<ll,bool> dp;
    ll t;
    //nが宝石数、weightがバッグサイズ
    cin>>n>>t;
    
    //サイズをいい感じにする
    //w.resize(n+1);
    v.resize(n);

    //i番目の宝石の価値と重さを入力
    rep(i,n){
        cin>>v[i];
    }
    set<ll> curtime;
    curtime.insert(0);
    rep(i,n){
        set<ll> next;
        for(auto itr=curtime.begin();itr!=curtime.end();++itr){
            next.insert(*itr);
            if(*itr+v[i]<=t) next.insert(*itr+v[i]);
        }
        curtime.clear();
        for(auto itr=next.begin();itr!=next.end();++itr){
            curtime.insert(*itr);
        }
    }
    for(auto itr=curtime.begin();itr!=curtime.end();++itr){
        if(maxi<*itr) maxi=*itr;
    }
    cout<<maxi<<endl;


    return 0;
}
