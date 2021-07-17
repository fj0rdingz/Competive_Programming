//https://atcoder.jp/contests/abc207/tasks/abc207_c
//閉区間交差判定

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
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    vector<long double> l(n);
    vector<long double> r(n);
    
    rep(i,n){
        cin>>a>>b>>c;
        if(a==1){
            l[i]=b;
            r[i]=c;
        }else if(a==2){
            l[i]=b;
            r[i]=c-0.1;
        }else if(a==3){
            l[i]=b+0.1;
            r[i]=c;
        }else if(a==4){
            l[i]=b+0.1;
            r[i]=c-0.1;
        }
        //cout<<l[i]<<" "<<r[i]<<endl;
    }

    rep(i,n-1){
        for(ll j=i+1;j<n;j++){
            if(min(r[i],r[j])>=max(l[i],l[j])) sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
