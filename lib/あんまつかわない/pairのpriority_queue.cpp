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


struct CompareByFirst {
constexpr bool operator()(pair<int, int> const & a,
pair<int, int> const & b) const noexcept
{ return a.first > b.first; }
};



int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
ll k;
        priority_queue<pair<int, int>,
        std::vector<pair<int, int> >,
        CompareByFirst> pq;
        pair<int,int> p;
        p=make_pair(1,2);
        pq.push(p);
    return 0;
    

}
