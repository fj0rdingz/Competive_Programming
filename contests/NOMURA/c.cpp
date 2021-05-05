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
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n+1);
    rep(i,n+1)   cin >> v[i];

    if(n==0){
        if(v[0]==1) cout<<1<<endl;
        else cout<<-1<<endl;
        return 0;
    }
    rep(i,n+1) v[i]++;
    //okはんてい
    //根の数(sum)がnの2乗+1<=nの2乗のときは成立
    ll njou=pow(2,n+1);
    //maxi=njou/2;

    for(ll i=0;i<=n;i++){
        njou/=2;
        maxi+=njou*v[i];
        //cout<<i<<" "<<maxi<<endl;
    }
    maxi++;
    //cout<<maxi<<endl;
    if(pow(2,n+1)+1<=maxi&&maxi<=pow(2,n+2)){

        rep(i,n+1) v[i]--;
        vector<ll> calc(n+1);
        //rep(i,n+1) calc[i]=pow(2,i);
        calc[0]=1;
        for(ll i=1;i<=n;i++){
            //cout<<calc[i-1]<<" "<<v[i-1]<<endl;
            calc[i]=(calc[i-1]-v[i-1])*2;
            //cout<<calc[i]<<endl;
        }
        sum=0;
        ll total=0;
        rep(i,n+1){
            total+=v[n-i];
            if(calc[n-i]<total){
                sum+=calc[n-i];
            }
            else sum+=total;
            //cout<<i<<" "<<calc[i]<<" "<<sum<<" "<<total<<endl;
        }
        rep(i,n+1){
            if(calc[i]<v[i]){
                cout<<-1<<endl;
                return 0;
            }
            //cout<<calc[i]<<" "<<v[i]<<endl;
        }
        cout<<sum<<endl;
    }
    else cout<<-1<<endl;

    return 0;
}
