// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str1,str2;
    cin>>m;
    rep(i,m){
        maxi=0;
        f=0;
        cin>>n>>a;
        vector<ll> v(n);
        rep(j,n) cin>>v[j];
        set<ll> s;
        rep(j,n-1){
            s.insert(v[j]);
        }
        s.insert(v[n-1]);
        if(s.size()>a){
            f=1;
            cout<<"-1"<<endl;
        }
        if(f==1) continue;
        cout<<10000<<endl;
        ll r=0;
        while(s.size()!=a){
            r++;
            s.insert(r);
        }
        vector<ll> vec(s.size());

        r=0;
        for(auto itr=s.begin();itr!=s.end();++itr,r++){
            vec[r]=*itr;
            //cout<<*itr;
        }
        for(ll j=1;j<=10000;j++){
            cout<<vec[j%s.size()]<<" ";
        }
        ln;
    }
    return 0;
}
