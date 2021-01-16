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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2&&y1==y2){
        cout<<0<<endl;
    }else if(
        abs(x2-x1)==abs(y2-y1)
        ||abs(x2-x1)<=2&&abs(y2-y1)<=2
        ||x1==x2&&abs(y2-y1)<=3
        ||y1==y2&&abs(x2-x1)<=3
    ){
        cout<<1<<endl;
    }else{
        if((x1+y1)%2==(x2+y2)%2) f=1;
        ll y3=y2;
        //y2をきめる
        ll y21 = y1+abs(x2-x1);
        ll y22 = y1-abs(x2-x1);
        if(y2-y21-x2 < y2-y22-x2) y2 = y21;
        else y2 = y22;
        //cout<<y21<<" "<<y22<<endl;
       // cout<<y2<<endl;
        y1=y2;y2=y3;
        x1=x2;
        if(
        abs(x2-x1)==abs(y2-y1)
        ||abs(x2-x1)<=2&&abs(y2-y1)<=2
        ||x1==x2&&abs(y2-y1)<=3
        ||y1==y2&&abs(x2-x1)<=3
        ||f==1
        ){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }

    return 0;
}
