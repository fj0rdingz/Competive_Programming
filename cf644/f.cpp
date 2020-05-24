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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>a;
    rep(_,a){
        ll l;
        cin>>n>>l;
        vector<string> s(n);
        vector<int> v(l);
        rep(i,n) cin>>s[i];
        vector<map<char,ll>> mp(l);
        rep(i,n){
            rep(j,l) mp[s[i][j]][j]++;
        }
        string ans;
        rep(j,l) {
            char maxchar;
            ll maxnum=0;
            for(auto itr=mp[j].begin();itr!=mp[j].end();++itr){
                //if(*itr>maxnum) {
            //    }
            }
        }
        
    }

  //  return 0;
}
