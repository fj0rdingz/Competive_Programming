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
        cin>>n>>k;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        vector<ll> a(n);
        vector<ll> b(n);

        rep(i,n)   cin >> v[i]>>a[i]>>b[i];
        rep(i,n){
            if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==0){
                v[i]*=2;
            }
        }
        priority_queue<pair<int, int>,
        std::vector<pair<int, int> >,
        CompareByFirst> pq;
        rep(i,n){
            if(a[i]==1||b[i]==1){
                pair<int,int> p=make_pair(v[i],i);
                pq.push(p);
            }
        }
        ll al=0;
        ll bo=0;
        
        while(!empty(pq)){
            pair<int,int> p=pq.top();
            if(al>=k&&bo>=k){
                pq.pop();
                continue;
            }
            ll mita=0;
            if(a[p.second]==1&&al<k){
                al++;
                if(b[p.second]==0){
                    p.first/=2;
                }else{
                    bo++;
                }
                sum+=p.first;
                mita=1;
            }
            if(!mita&&b[p.second]){
                bo++;
                sum+=p.first/2;
            }
            //cout<<p.first<<" "<<p.second<<endl; 
            pq.pop();
        }
    cout<<sum<<endl;
    return 0;
    

}
