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
vector<ll> v(10000);
vector<ll> w(10000);
ll mini=INF;
bool C(ll num,ll curbest){
rep(i,v.size()+1){
    if(i)
    
}

}
bool hantei(ll num){
    if(num==0) return true;
    ll sum=0;
    rep(i,v.size()){
        if(v[i]>num){
            sum+=v[i]/num;
            if(!(v[i]%num)) sum--;
        }
    }
    if(sum<=b) return true;
    else return false;
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>m;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    v.resize(n);
    w.resize(m);
    rep(i,n)   cin >> v[i];
    rep(i,m)   cin >> w[i];
    sort(all(v));
    sort(all(w));
    ll ub=10e9+1;
    ll lb=0;
    ll best=INF;
    for(ll i=0;i<100;i++){
        ll mid=(lb+ub)/2;
        if(mid==0) continue;
        if(C(mid,best)) lb=mid;
        else ub=mid;
    }


    return 0;
}
