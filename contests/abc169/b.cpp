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
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    rep(i,n)   cin >> v[i];
    sum=1;
    rep(i,n){
        if(v[i]==0){
            cout<<0<<endl;
            return 0;
        }
    }
    maxi=pow(10,18);
    ll lastsum;
    rep(i,n){
        sum*=v[i];
        if(sum>maxi||lastsum>sum){
            cout<<-1<<endl;
            return 0;
        }
        lastsum=sum;
    }
    cout<<sum<<endl;

    return 0;
}
