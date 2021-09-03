// https://atcoder.jp/contests/abc167/tasks/abc167_d
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
    cin>>n>>k;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n+1);
    rep(i,n)   cin >> v[i+1];
    map<ll,ll> mp;   //入力が大きいときはmap,ループ回数がきついときはvectorでとる
    ll i=1;
    // 無限ループするまでmapを埋める
    ll num=0;
    ll loopfirst=0;
    while(mp[i]!=2){
        mp[i]++;
        i=v[i];
        num++;
        // 無限ループするまでに終わる場合はここでアーリーリターン
        if(num==k){
            cout<<i<<endl;
            return 0;
        }
        // 無限ループの始まりを記録
        loopfirst=i;
    }
    ll modi=0;
    // mp[i]==1が1回だけ通る都市群,mp[i]==2が無限ループする都市群
    // mp[i]==2の数でmod
    rep(i,n+1) if(mp[i]==1) k--;
    rep(i,n+1) if(mp[i]==2) modi++;
    if(modi!=0)k%=modi;
    else k=0;
    i=loopfirst;
    ll lp=0;
    // 初期位置i(Loopの初めの位置)から、k回移動した先が答え
    rep(_,k){
        i=v[i];
        lp++;
    }
    cout<<i<<endl;


    return 0;
}
