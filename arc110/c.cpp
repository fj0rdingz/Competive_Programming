// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool comp(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         //return a.first < b.first; // 昇順
        return a.first > b.first; // 降順
    }
/*
    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        // どちらも同じ
        return true;
    }
    */
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    vector<ll> w(n);
    vector<ll> sa(n);
    vector<ll> sawa(n-1);
    rep(i,n)   cin >> v[i];
    rep(i,n) w[i]= v[i];
    sort(all(w));
    rep(i,n) sa[i] = abs(v[i]-w[i]);
    rep(i,n-1) {
        sawa[i]=sa[i]+sa[i+1];
        cout<<sawa[i];
    }ln;
    sum=accumulate(all(sa),0LL);
    if((n-1)*2!=sum){
        cout<<-1<<endl;
        return 0;
    }
    vector<P> p(n-1);
    rep(i,n-1) {
        p[i]=P(sawa[i],i);
    }
    sort(all(p),comp);
    priority_queue<ll> pq;
    rep(i,n-1){
        pq.push(p[i].second);
    }
    map<ll,ll> mp;
    while(!pq.empty()){
        ll pa=pq.top();
        pq.pop();
        //if(pa!=0){
        f=0;
        if(mp[pa-1]==1){
            pa-=2;
            mp[pa-1]=0;
            f=1;
        }
        if(mp[pa+1]==1){
            pa-=2;
            mp[pa+1]=0;
            f=1;
        }
        if(f){
            pq.push(pa);
        }else{
            mp[pa+1]++;
            mp[pa-1]++;
            cout<<pa+1<<endl;
        }
    }


    return 0;
}
