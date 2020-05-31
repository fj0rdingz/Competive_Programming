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
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#include <vector>
map< int64_t, int > prime_factor(int64_t n) {
  map< int64_t, int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}
int main(){
    ll n;
    cin>>n;
    vector<ll> nums(100000);
    ll i=0;
    for(auto p : prime_factor(n)) {
    while(p.second--) {
        nums[i]++;
    }
            i++;
            //cout<<nums[i]<<endl;
  }
  ll sum=0;
  i=0;
    while(nums[i]!=0){
        ll k=1;
        ll cntr=1;
        for(ll j=1;j<=nums[i];j+=k){
            sum++;
            k++;
           // cout<<j<<endl;
        }
        i++;
    }
    cout<<sum<<endl;
}