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
    cin>>a;
    rep(i,a){
        cin>>n;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        rep(j,n)   cin >> v[j];
        ll odd=0,even=0;
        sort(v.begin(),v.end());
        rep(i,n) {
            if(v[i]%2==0) even++;
            else odd++;
        }
        if(even%2){
            rep(j,n-1){
                if(v[j+1]-v[j]==1) f=1;
            }
            if(f==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        f=0;
    }
    return 0;
}
