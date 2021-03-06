//
#include <bits/stdc++.h>
#define mod LLONG_MAX
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
vector<long long> fact_inv, inv;
/*  init_nCk :二項係数のための前処理
    計算量:O(k)
*/
void init_nCk(int SIZE) {
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        inv[i] = mod - inv[mod % i] * (mod / i) % mod;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % mod;
    }
}
/*  nCk :modでの二項係数を求める(前処理 int_nCk が必要)
    計算量:O(k)
*/
long long nCk(int n, int k) {
    assert(!(n < k));
    assert(!(n < 0 || k < 0));
    long long ans = 1;
    for (int i = n; i >= n - k + 1; i--) {
        ans *= i;
        ans %= mod;
    }
    return ans * fact_inv[k] % mod;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll m,n,maxi=0,mini=INF,sum=0;
    //string str;
    
    ll x,y,t;
    cin>>x>>y;
    if((x+y)%3) {
        cout<<0<<endl;
        return 0;
    }
    ll a=(x+y)/3;
    x-=a;
    y-=a;
    if(x<0||y<0){
        cout<<0<<endl;
        return 0;
    }
    init_nCk(x+y);
    cout<<nCk(x+y,x)<<endl;
    return 0;
}
