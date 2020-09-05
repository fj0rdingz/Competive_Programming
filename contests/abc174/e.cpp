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
vector<ll> v(10000000);
ll b;
bool C(ll num){
    ll sum=0;
    rep(i,v.size()){
        if(v[i]>num){
            sum+=v[i]/num;
            if(!(v[i]%num)) sum--;
        }
    }
    return(b<sum);
}
bool hantei(ll num){
    if(num==0) return true;
    ll sum=0;
    rep(i,v.size()){
        if(v[i]>num){
            sum+=v[i]/num;
            if(!(v[i]%num)) sum--;
        }
    }
    if(sum<=b) return true;
    else return false;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>b;
    priority_queue<long double> q;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    v.resize(n);
    rep(i,n)  {
        cin>>v[i];
    }
    if(b==0){
        maxi=v[n-1];
        rep(i,n-1){
            maxi=max(maxi,v[i]);
        }
        cout<<maxi<<endl;
        return 0;
    }
    ll ub=10e9+1;
    ll lb=0;
    for(ll i=0;i<100;i++){
        ll mid=(lb+ub)/2;
        if(mid==0) continue;
        if(C(mid)) lb=mid;
        else ub=mid;
    }
    if(hantei(ub)) cout<<ub<<endl;
    else cout<<lb<<endl;
    //cout<<"ub "<<ub<<" lb "<<lb<<endl;

    return 0;
}
