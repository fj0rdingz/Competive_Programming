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

    ll m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll q;
    cin>>n>>m>>q;
    vector<ll> a(q);
    vector<ll> b(q);
    vector<ll> c(q);
    vector<ll> d(q);
    vector<ll> t(n);
    vector<ll> tmax(n);

    rep(i,n) t[i]=10;
    rep(i,n) tmax[i]=i+1;
    rep(i,n)   cin >> a[i]>>b[i]>>c[i]>>d[i];
    ll p=0;
    ll lastnum=2;
    for(ll j=0;;){
        //点数計算
        rep(i,q){
            if(t[b[i]]-t[a[i]]==c[i]) sum+=d[i];
        }
        maxi=max(sum,maxi);
        sum=0;

        //終了判定
        f=1;
        rep(i,n){
            if(t[i]!=tmax[i]) f=0;
        }
        if(f==1) break;

        //最下位ビット増加
        
        
    }
    cout<<maxi<<endl;



    return 0;
}
