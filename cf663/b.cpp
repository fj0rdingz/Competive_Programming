// lcmとか__builtin_popcountとかはg++ -gcd  default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
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

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>a;
    rep(_,a){
        ll h,w;
        cin>>h>>w;
        sum=0;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        string s[h];
        rep(i,h)   cin >> s[i];
        rep(i,h) if(s[i][w-1]=='R')sum++;
        rep(i,w) if(s[h-1][i]=='D')sum++;
        cout<<sum<<endl;
    }


    return 0;
}
