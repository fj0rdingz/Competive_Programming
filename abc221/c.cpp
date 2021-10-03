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
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v;

    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    maxi = 0;
    sort(all(v));
    for(ll bit=0;bit<(1<<v.size());bit++){
        vector<ll> a2;
        vector<ll> a1;
        rep(i,v.size()){
            if(bit&(1<<i)) a1.push_back(v[i]);
            else           a2.push_back(v[i]);
        }
        sort(all(a1));
        sort(all(a2));
        a=0;
        b=0;
        ll num=1;
        rep(i,a1.size()){
            a+=num*a1[i];
            num*=10;
        }
        num=1;
        rep(i,a2.size()){
            b+=num*a2[i];
            num*=10;
        }
        maxi=max(maxi,b*a);
    }
    

    cout<<maxi<<endl;
    return 0;
}
