#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    string str;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(n);

    rep(i,m){
        cin>>k;
        rep(j,k){
            cin>>l;
            l--;
            a[i]=a[i]|(1<<l);
        }
    }
    rep(i,m) cin>>b[i];
    ll f;
    for(int bit=0,i=0;bit<(1<<n);++bit,++i){
        f=1;
        rep(i,m){
            ll cnt=0;
            tmp=a[i]&bit;
            while(tmp!=0){
                if(tmp%2==1) cnt++;
                tmp/=2;
            }
            if((cnt+b[i])%2==1) f=0;
        }
        if(f==1) sum++;
    }

    cout<<sum<<endl;
    

    return 0;
}