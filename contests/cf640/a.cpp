// lcmとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>m;
    rep(i,m){
        cin>>n;
        set<ll> s;
        for(int i=0;n!=0;i++){
            if(n%10!=0) {
                ll j=n%10;
                rep(k,i) j*=10; 
                s.insert(j);
            }
            n/=10;

        }
        cout<<s.size()<<endl;
        for(auto itr=s.begin();itr!=s.end();++itr){
            cout<<*itr<<" ";
        }
        cout<<endl;

    }

    return 0;
}
