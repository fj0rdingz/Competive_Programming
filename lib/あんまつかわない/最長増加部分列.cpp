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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
template< typename T >
size_t longest_increasing_subsequence(const vector< T > &a, bool strict) {
  vector< T > lis;
  for(auto &p : a) {
    typename vector< T >::iterator it;
    if(strict) it = lower_bound(begin(lis), end(lis), p);
    else it = upper_bound(begin(lis), end(lis), p);
    if(end(lis) == it) lis.emplace_back(p);
    else *it = p;
  }
  return lis.size();
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector< int > A(N);
  rep(i,N) cin>>A[i];
  //true:狭義 false:広義
  cout<<"LIS: "<<longest_increasing_subsequence(A, true)<<endl;


}
