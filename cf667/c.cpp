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
vector< ll > divisor(ll n) {
  vector< ll > ret;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    ll x,y;
    cin>>loop;
    rep(_,loop){
        cin>>n>>x>>y;
        vector<ll> div=divisor(y-x);
        a=*lower_bound(all(div),(double)(y-x)/(n-1));
        ll i=0;
        rep(i,div.size()){
       //     cout<<div[i]<<" ";
         }
       //  ln;
       f=0;
                   if((y-x)<=(n-1)) f=1;

        while(f!=1&&a*(y-x-1)<n){
            a=*(lower_bound(all(div),(double)(y-x)/(n-1))+i);
            i++;
        }
        if(f) a=1;

       // else cout<<a<<endl;
        ll b=y;
        while(n>0){
            cout<<b<<" ";
            b-=a;
            n--;
            if(b<=0) break;
        }
        b=y+a;
        while(n>0){
            cout<<b<<" ";
            b+=a;
            n--;
        }
        ln;
    }


    return 0;
}
