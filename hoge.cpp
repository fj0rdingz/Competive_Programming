// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// -fsanitize=undefinedでオーバーフロー検出,オーバーフローする入力を投げるとよい
#include <bits/stdc++.h>
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool is_prime(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return false;
    }
    if(n==1) return false;
    return true;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
 
    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str,stra="CODEFESTIVAL2016";
    ll k;
    ll w,x;
    cin>>n;
    bool fl=is_prime(n);
    if(!fl){

        if(n%3!=0&&n%2!=0&&n%5!=0) fl=true;
    }
    if(fl&&n!=1) cout<<"Prime";
    else cout<<"Not Prime";
ln;
    return 0;
}
