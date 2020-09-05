// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// -fsanitize=undefinedでオーバーフロー検出
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
std::vector<int> Eratosthenes( const int N )
{
    std::vector<bool> is_prime( N + 1 );
    for( int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    std::vector<int> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int a,b,c,d,m,n,maxi=0,f=0,mini=1000,sum=0;
    string str;
        cin>>n;
    //vector<vector<int>> v(tate,vector<int> (yoko));
    vector<int> v(n);
    rep(i,n)   cin >> v[i];
    map<int,int> mp;
    set<int> s;
    
   // rep(i,n){
        for(const auto &x:Eratosthenes(1000000)){
            sum++;
          //mp[x]++;
          s.insert(x);
        }        
    //}
    //cout<<sum<<endl;
    maxi=1;
    rep(i,n){
    for(auto itr=s.begin();itr!=s.end();++itr){
        if(v[i]%*itr==0) {
          mp[*itr]++;
          if(*itr!=(v[i]/ *itr))mp[v[i]/ *itr]++;
        }
        }
    }
    for(auto itr=s.begin();itr!=s.end();++itr){
      if(*itr==1) continue;
      maxi=max(mp[*itr],maxi);
    }
    if(maxi==1) {
      cout<<"pairwise coprime"<<endl;
      return 0;
    }
    rep(i,n-1){
      mini=min(gcd(v[i],v[i+1]),mini);
    }
    if(mini==1)cout<<"setwise coprime"<<endl;
    else cout<<"not coprime"<<endl;

    return 0;
}
