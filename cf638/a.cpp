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

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str1,str2;
    cin>>n;
    vector<ll> v(n);
    rep(i,n){
        cin>>a;
        for(ll j=1,c=2;j<=a;j++,c*=2){
            if(j==a||a/2-1>=j){
                sum+=c;
            }else{
                f+=c;
            }
        }
        cout<<sum-f<<endl;
        sum=0;
        f=0;
    }   

    return 0;
}
