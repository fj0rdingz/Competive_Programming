#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000019
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int dp[2000][2000];
vector<int> w(2000);
vector<int> v(2000);

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    int maxi=0;
    int i;
    double h;
    int n,x,m=5;
    int a,b,d,c;
    ll k;

        cin>>n>>m>>k;
        vector<vector<ll>> v(n,vector<ll> (m));
        vector<vector<ll>> hokan(n,vector<ll> (m));
        vector<vector<ll>> f(n,vector<ll> (m));
        rep(i,n){
        string str;
            cin>>str;
            rep(j,str.length()) hokan[i][j]=stoll(str.substr(j,1));
        }
                ll counter=0;


        ll maxsum=0;
        rep(x,n)rep(y,m){
            rep(i,n)rep(j,m) v[i][j]=hokan[i][j];
            for(ll i=x;i>=1;i--) v[i][y]=v[i-1][y];
            v[0][y]=0;

            ll sum=0;
            ll endf=0;
            ll loop=0;
            while(!endf){
                endf=1;
                rep(i,n) rep(j,m) {f[i][j]=0;}
                for(ll i=0;i<n;i++) {
                    for(ll j=0;j<m-k+1;j++){
                        ll flag=0;
                        for(ll l=j;l<j+k-1;l++){
                            if(v[i][l]!=v[i][l+1]||v[i][l]==0) {
                                flag=1;
                                break;
                            }
                        }
                        if(flag==0){
                            for(ll l=j;l<j+k;l++){
                                f[i][l]=1;
                            }
                        }
                    }
                }
                ll karisum=0;
                for(ll i=0;i<n;i++) {
                    for(ll j=0;j<m;j++){
                        if(f[i][j]==1) {
                            karisum+=v[i][j];
                            v[i][j]=0;
                            endf=0;
                        }
                    }
                }
                sum+=pow(2,loop)*karisum;
                loop++;



                for(ll j=0;j<m;j++){
                    ll takasa=n-1;
                    for(ll i=n-1;i>=0;i--){
                        if(f[i][j]==0){
                            v[takasa][j]=v[i][j];
                            takasa--;
                        }
                    }
                    for(i=takasa;i>=0;i--){
                    v[i][j]=0;
                    }
                }
    
            }
            maxsum=max(sum,maxsum);
        }
        cout<<maxsum<<endl;

    return 0;
}
