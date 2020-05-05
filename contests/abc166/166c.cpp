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


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll c,d,n,m,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    
    vector<ll> h(n);
    rep(i,n) cin>>h[i];
    vector<ll> tf(n);
    rep(i,n) tf[i]=1;
    vector<ll> a(n);
    vector<ll> b(m);
    rep(i,m){
        cin>>c>>d;
        a[c-1]=max(a[c-1],h[d-1]);
        a[d-1]=max(a[d-1],h[c-1]);
    }
    rep(i,n){
        if(a[i]<h[i]) sum++;
    }


    
    cout<<sum<<endl;
    return 0;
}
