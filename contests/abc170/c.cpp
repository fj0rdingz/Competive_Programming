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

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>m>>n;
    if(n==0){
        cout<<m<<endl;
        return 0;
    }
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    set<ll> s;
    rep(i,n){
        cin>>a;
        s.insert(a);
    }
    ll lastz;
    ll lastnum;
    lastz=1000000000;
    lastnum=0;
    rep(i,102){
        if(s.find(i)!=s.end()) continue;
        if(lastz>abs(m-i)){
            lastz=abs(m-i);
            lastnum=i;
        }
    }
    cout<<lastnum<<endl;

    return 0;
}
