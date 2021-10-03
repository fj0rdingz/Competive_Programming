#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define endl '\n'
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
//using namespace atcoder;
typedef pair<ll,ll> P;
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string s1,s2;
    cin>>s1>>s2;
    f=1;
    rep(j,s1.length()){
        if(s1[j]!=s2[j]) f=0;
    }
    if(f) sum=1;
    rep(i,s1.length()-1){
        swap(s1[i],s1[i+1]);
        f=1;
        rep(j,s1.length()){
            if(s1[j]!=s2[j]) f=0;
        }
        if(f) sum=1;
        swap(s1[i],s1[i+1]);

    }
    if(sum==1) Yes;
    else No;

    return 0;
}
