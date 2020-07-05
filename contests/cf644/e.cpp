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
    rep(_,a){
        f=0;
        int h;
        cin>>h;
        vector<vector<char>> v(h,vector<char> (h));
        rep(j,h)rep(k,h)cin>>v[j][k];
        for(ll i=h-1;i>=0;i--){
            for(ll j=h-1;j>=1;j--){
                if(v[i][j]=='0'&&v[i][j-1]=='1'){
                    if(i!=(h-1)&&v[i+1][j-1]=='0') f=1;
                }
                //cout<<v[i][j];
            }
            //cout<<v[i][0]<<endl;
        }
        for(ll i=h-1;i>=1;i--){
            for(ll j=h-1;j>=0;j--){
                if(v[i][j]=='0'&&v[i-1][j]=='1') {
                    if(j!=(h-1)&&v[i-1][j+1]=='0') f=1;
                }
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
