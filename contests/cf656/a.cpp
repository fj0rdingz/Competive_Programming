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
    cin>>n;
    rep(i,n){
        f=0;
        maxi=0;
    cin>>a>>b>>c;
    maxi=max(a,b);
    maxi=max(maxi,c);
    if(maxi==a) f++;
    if(maxi==b) f++;
    if(maxi==c) f++;
    if(f>=2&&a==b||f>=2&&b==c||f>=2&&c==a){
            cout<<"YES"<<endl;
            if(a==b&&b==c&&c==a){
                cout<<a<<" "<<a<<" "<<a<<endl;

            }else if(a==b){
                cout<<a<<" "<<c<<" "<<c<<endl;

            }else if(b==c){
                cout<<a<<" "<<a<<" "<<c<<endl;
            }else{
                cout<<b<<" "<<a<<" "<<b<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
