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

    ll a,b,c,d,m,n,nax=0,f=0,mini=INF,sum=0;
    ll maxi=0;
    //string str;
    ll k;
    cin>>a;
    rep(per,a){
        cin>>n;
        vector<int> v(n);
        rep(i,n) cin>>v[i];
        ll top=1;
        ll tale=0;
        while(v[top+1]>=0||sum+v[top+1]>0) {
            top++;
            sum+=top;
            if(v[top]>maxi) maxi=v[top];
        }

        sum=0;
        while(tale!=n-1){
            while(v[tale+1]<0) tale++; 
        }

    }
    return 0;
}
