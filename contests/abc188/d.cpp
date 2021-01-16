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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n>>d;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    rep(i,n)   cin >> a[i]>>b[i]>>c[i];
    rep(i,n)   {
        a[i]--;
        b[i]--;
    }
    vector<ll> chk;
    map<ll,ll> cal;
    set<ll> s;
    rep(i,n){
        cal[a[i]]+=c[i];
        cal[b[i]+1]-=c[i];
        s.insert(a[i]);
        s.insert(b[i]+1);
        //s.insert(b[i]+2);
    }
    for(auto itr=s.begin();itr!=s.end();++itr){
        chk.push_back(*itr);
    }
    sort(all(chk));
    ll cur=0;
    rep(i,chk.size()){
        if(i!=0) sum+=min(cur,d)*(chk[i]-chk[i-1]);
      //  cout<<i<<" "<<chk[i]<<" "<<cur<<" "<<sum<<endl;
        cur+=cal[chk[i]];
    }
    cout<<sum<<endl;


    return 0;
}
