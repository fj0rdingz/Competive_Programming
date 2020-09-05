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
ll d;
bool C(ll target){
    return d>(double)(target*20+10)/target;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,nax=0,f=0,mini=INF,sum=0;
    ll maxi=0;
    //string str;
    ll k;
    cin>>a;
    rep(per,a){
        cin>>b>>c>>d;
        if(b<=d){
            cout<<1<<endl;
        }else if((c+b)/2>=d){
            cout<<2<<endl;
        }else{
            ll lb=0,ub=LLONG_MAX-1;
            ll mid;
            for(ll i=0;i<100;i++){
                mid=(lb+ub)/2;
            if(C(mid))ub=mid;
            else lb=mid;
            }
            if(lb%2==0) lb++;
            cout<<lb<<endl;
        }

    }
    return 0;
}
