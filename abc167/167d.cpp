// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    ll k;
    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>k;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n+1);
    rep(i,n)   cin >> v[i+1];
    vector<ll> memo(300000+1);
    rep(i,300000) memo[i]=0;
    ll now=1;
    for(ll i=1;i<=k;i++){
        now=v[now];
        
        //cout<<i<<" "<<now<<endl;
        if(memo[now]!=0&&f==0){
            k=k-i;
            ll loop=i-memo[i];
            k=k%loop;
            i=0;
            f=1;
            //if(k==0) break;
        }
        memo[now]=i;

        //cout<<k<<endl;
    }
    cout<<now<<endl;
    return 0;
}
