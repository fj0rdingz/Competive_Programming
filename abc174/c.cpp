// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
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
    a=7;
    ll lastper=7;
    rep(i,1000001){
        //cout<<"a="<<a<<" lastper="<<lastper<<endl;
        if(a%n==0){
            cout<<i+1<<endl;
            return 0;
        }
        if(f==0){
            lastper*=10;
            a+=lastper;
            if(lastper>=n) f=1;
        }else{
            lastper*=10;
            lastper%=n;
            a+=lastper;
        }
    }
    cout<<-1<<endl;
    return 0;
}
