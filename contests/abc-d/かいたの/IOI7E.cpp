#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    ll maxi=0;
    string str;
    cin>>n>>m;
    vector<vector<ll>> piyo(n,vector<ll> (m));
    rep(i,n)rep(j,m)   cin >> piyo[i][j];
    vector<vector<ll>> cal(n,vector<ll> (m));
    rep(i,n)rep(j,m) cal[i][j]=piyo[i][j];

    ll yoko=0;
    for(ll bit=1;bit<=(1<<n);++bit){
        rep(i,m){
            rep(j,n){
                if(cal[j][i]) yoko++; 
                //cout<<cal[j][i]<<" ";
            }
            sum+=max(n-yoko,yoko);
            //cout<<endl;
            yoko=0;
        }
        //cout<<endl;
        maxi=max(maxi,sum);
        sum=0;
        rep(i,n){
            if(bit&(1<<i)){
                rep(j,m){
                    cal[i][j]=abs(piyo[i][j]-1);
                }
            }else{
                rep(j,m){
                    cal[i][j]=piyo[i][j];
                }
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}