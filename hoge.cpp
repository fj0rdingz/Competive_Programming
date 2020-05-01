// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
ll target;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    ll maxi=0,f=0,sum=0,mini=INF;
    string str,str1,str2;
    ll i,w;
    double h;
    ll n,x,m;
    ll a,b,d,c;
    set<string> s;
    cin>>n>>h>>x;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    rep(i,n){
        if(mini>abs(-x*1000+h*1000-6*v[i])){
            f=i+1;
            mini=abs(-x*1000+h*1000-6*v[i]);
        }
        //cout<<h-0.006*v[i]<<endl;
    }
    cout<<f<<endl;

    return 0;
}
