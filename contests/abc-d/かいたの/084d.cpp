#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

bool is_prime(ll n) {
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return false;
    }
    if(n==1) return false;
    return true;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    string str;
    cin>>n;
    vector<ll> v;
    for(j=1;j<=100000;j+=2){
            if(is_prime(j)&&is_prime((j+1)/2)) v.push_back(j);
    }

    //rep(i,v.size()) cout<<v[i];
    
    rep(i,n){
        ll a,b;
        cin>>a>>b;
        cout<<upper_bound(v.begin(),v.end(),b)-lower_bound(v.begin(),v.end(),a)<<endl;
    }


    return 0;
}