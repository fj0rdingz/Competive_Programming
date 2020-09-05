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
    cin>>n;
    sum=1;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    f=0;
    rep(i,n)   cin >> v[i];
    ll lastnum=n-1;
    for(ll i=n-1;i>=0;i--){
        if(v[i]==i+1) {
            lastnum=i-1;
        }
        else break;
    }
    ll same=0;
    for(ll i=0;i<=lastnum;i++){
        if(f==0&&i+1==v[i]) continue;
        else{
            f=1;
            if(v[i]==i+1){
                same=1;
            }else{
                if(same==1){
                sum++;
                same=0;
                }
            }
        }
    }
    f=0;
    rep(i,n){
        if(v[i]!=i+1){
            f=1;
            break;
        }
    }
    if(f){
        if(sum>=2) sum=2;
        cout<<sum<<endl;
    }else{
        cout<<0<<endl;
    }
    }

    return 0;
}
