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
        sum=0;
        cin>>n;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        maxi=*max_element(all(v));
        vector<ll> w(n);
        vector<ll> x(n);

        ll curmaxi=v[0];
        rep(i,n){
            x[i]=max(curmaxi,v[i]);
            curmaxi=max(v[i],curmaxi);
            //cout<<curmaxi<<" ";
        }
        //ln;
        rep(i,n) {
            w[i]=x[i]-v[i];
            //cout<<w[i]<<" ";
        }
        //ln;
        //curmaxi
        curmaxi=0;
        w.push_back(0);
       rep(i,n){
            if(w[i]>w[i+1]){
                sum+=w[i]-w[i+1];
            }
            //cout<<sum<<" ";
        }
        //sum+=curmaxi;

        cout<<sum<<endl;
    }


    return 0;
}
/*
6
11
1 5 3 1 3 5 1 5 3 6 1
4
5 3 2 5
5
1 2 3 5 3
3
1 1 1
11
1 5 3 1 3 5 1 5 3 6 0
5
8 3 5 7 0
*/
