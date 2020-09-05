// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,nax=0,f=0,mini=INF,sum=0;
    string str;
    ll k;
    cin>>a;
    rep(i,a){
    cin>>n>>m>>k;
    ll per=n/k;
    if(m>=per) nax=per;
    else nax=m;
    m=m-nax;
    k--;
    if(k!=0){
        mini=m/k;
        if(m%k) mini++; 
    }
    else mini=0;
    cout<<nax-mini<<endl;
    }
    return 0;
}
