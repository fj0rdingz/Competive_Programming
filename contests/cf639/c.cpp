// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll k;
    cin>>k;
    rep(j,k){
        cin>>n;
        vector<ll> v(n);
        rep(i,n){
            cin>>v[i];
            v[i]=v[i]%n+n;
            v[i]+=i+1;
            //v[i]=v[i]%n;
        }
        rep(i,n){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        set<ll> s;
        ll size=0;
        rep(i,n){
            s.insert(v[i]);
            if(size==(ll)(s.size())){
                f=1;
                break;
            }
            size=(ll)(s.size());
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        f=0;
    }
    return 0;
}
