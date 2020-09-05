// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    ll x,y;
    rep(_,loop){
        cin>>a>>b>>x>>y>>n;
        ll amin,bmin;
        if(a-n<x){
            amin=x;
        }else{
            amin=a-n;
        }
        if(b-n<y){
            bmin=y;
        }else{
            bmin=b-n;
        }
        ll bmax=b-n+(a-amin);
        ll amax=a-n+(b-bmin);
        if(bmax<y) bmax=y;
        if(amax<x) amax=x;
        //cout<<amin<<" "<<bmax<<" "<<amax<<" "<<bmin<<endl;
        cout<<min(bmin*amax,amin*bmax)<<endl;
        cout<<LLONG_MAX<<endl;
    }


    return 0;
}
