// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0,loop,k;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n>>k;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        maxi=*max_element(all(v));
        rep(i,n) v[i]=maxi-v[i];
        k--;
        if(k%2==0){
            rep(i,n) cout<<v[i]<<" ";
        }else{
            maxi=*max_element(all(v));
            rep(i,n) v[i]=maxi-v[i];
            rep(i,n) cout<<v[i]<<" ";
        }
        ln;
    }


    return 0;
}