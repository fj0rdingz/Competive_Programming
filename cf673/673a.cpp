#include <bits/stdc++.h>
#define ll long long
#define ln cout<<endl;
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,n,w,x,y,z,p,q,tmp,sum=0;
    string str;
    cin>>n;
    vector<int> m(n);

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);
    rep(i,n)   cin>>m[i]>>a[i]>>b[i]>>c[i]>>d[i];
    rep(i,n){
        if((a[i]-b[i])*m[i]<=c[i]-d[i]&&c[i]+d[i]<=(a[i]+b[i])*m[i]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        cout<<(a[i]-b[i])*m[i]<<" "<<c[i]-d[i]<<" "<<c[i]+d[i]<<" "<<(a[i]+b[i])*m[i]<<endl;
    }

    return 0;
}