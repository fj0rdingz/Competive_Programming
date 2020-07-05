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

    ll a,b,c,d,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll k;
    cin>>d;
    rep(_,d){
        cin>>n>>k;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        map<ll,ll> m;
        set<ll> s;
        rep(i,n)   cin >> v[i];
        rep(i,n){
            if(v[i]%k!=0){
                s.insert(v[i]%k);
                m[v[i]%k]++;
            }
        }
        ll minnum=0;
        ll lastitr=0;
        for(auto itr=s.begin();itr!=s.end();++itr){
            if(m[*itr]>minnum){
                    lastitr=*itr;
                    minnum=m[*itr];
            }
            else if(minnum==m[*itr]&&*itr<lastitr){
                    lastitr=*itr;
                    minnum=m[*itr];
                }
            
        }
        if((minnum-1)*k+k-(lastitr)==0) cout<<0<<endl;
        else cout<<(minnum-1)*k+k-(lastitr)+1<<endl;
    }


    return 0;
}
