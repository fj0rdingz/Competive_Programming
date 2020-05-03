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
    vector<ll> a(m);
    vector<ll> b(m);
    rep(i,m){
        cin>>a[i]>>b[i];
    }
    rep(i,n){
                    if(tf[i]==0) continue;

        rep(j,m){
            if(a[j]==i+1){
                if(h[i]<=h[b[j]-1]) {
                    tf[i]=0;
                }else{
                    tf[b[j]-1] =0;
                }
                if(h[i]==h[b[j]-1]) tf[b[j]-1] =0;
            }else if(b[j]==i+1){
                if(h[i]<=h[a[j]-1]) {
                    tf[i]=0;
                    //cout<<h[b[j]]<<" "<<h[i]<<endl;

                }else{
                    tf[a[j]-1] =0;
                }
                if(h[i]==h[a[j]-1]) tf[a[j]-1] =0;

            }
            if(tf[i]==0) break;
        }
        if(tf[i]==1) {
            sum++;
           // cout<<i+1<<"  ";
        }
    }


    
    cout<<sum<<endl;
    return 0;
}
