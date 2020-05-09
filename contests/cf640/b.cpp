// lcmとかはg++ -std=c++17 default.cppみたいなかんじで

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
        ll k;
        cin>>n>>k;
        if(n%2&&k%2==0){
            f=0;
        }else if(n<k){
            f=0;
        }else{
            if(n%2==0&&k%2&&k*2>n){
                f=0;
            }else{
                f=1;
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            if(n%2==0&&k%2){
                rep(i,k-1) cout<<"2 ";
                cout<<n-2*k+2<<endl;
            }else{
                rep(i,k-1) cout<<"1 ";
                cout<<n-k+1<<endl;
            }
        }
    }

    return 0;
}
