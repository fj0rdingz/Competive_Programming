// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>m;
    rep(_,m){
        ll f1=INF,f2=INF,f3=INF;
        cin>>str;
        mini=INF;
        rep(i,str.length()){
            if(str[i]=='1'){
                f1=i;
            }else if(str[i]=='2'){
                f2=i;
            } else {
                f3=i;
            }
            if(f1==INF||f2==INF||f3==INF) continue;
            ll big=-INF,small=INF;
            if(f2<f1){
                if(f3<f1){
                    big=f1;
                }else if(f2<f3){
                    big=f3;
                }else{ 
                    big=f2;
                }
            }
            if(f1<f2){
                if(f3<f2){
                    big=f2;
                }else{
                    big=f3;
                }
            }
            if(f2>f1){
                if(f3>f1){
                    small=f1;
                }else if(f2>f3){
                    small=f3;
                }else {
                    small=f2;
                }
            }
            if(f1>f2){
                if(f3>f2){
                    small=f2;
                }else {
                    small=f3;
                }
            }
            //cout<<big<<" "<<small<<endl;
            mini=min(big-small+1,mini);
            
        }
        if(mini==INF) cout<<0<<endl;
        else cout<<mini<<endl;
        
    }

    return 0;
}
