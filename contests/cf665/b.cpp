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

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        ll x1,x2,y1,y2,z1,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        mini=INF;
        mini=min(z1,y2);
        sum=mini*2;
                z1-=mini;
        y2-=mini;
        ll all1=x1+y1+z1;
        ll all2=x1+y1+z1;

        //all1=all1-x1-z1;
        //all2=all2-x2-y2;
        ll f1=0,f2=0;
       // cout<<sum<<endl;
        ll xymin=min(x1+z1,x2+y2);
            y1=y1-xymin;
        if(y1>0)    f1=1;
        
        
            z2=z2-xymin;
        if(z2>0)    f2=1;
        
        //cout<<y1<<" "<<z2<<endl;
        if(f1&&f2) {
        sum-=min(y1,z2)*2;
        }
        cout<<sum<<endl;

    }


    return 0;
}
