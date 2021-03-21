// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln putchar('\n');
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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n>>k;
        cin>>str;
        if(k==0){
            YES;
            continue;
        }else{
            ll med=n/2;
            f=1;
            if(k*2==n){
                NO;
                continue;
            }else{
                if(n%2){
                    for(ll i=n/2;n/2-i<k;i--){
                        if(str[med+i]!=str[med-i]) {
                            f=0;
                        }
                    }
                }else{
                    for(ll i=n/2;n/2-i<k;i--){
                        if(str[med+i-1]!=str[med-i]) {
                            f=0;
                        }
                    }
                }
                if(f==1)YES;
                else NO;
            }
        }
        
    }
    return 0;
}
