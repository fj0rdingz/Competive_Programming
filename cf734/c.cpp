// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
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
//using namespace atcoder;
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,loop;
    cin>>loop;
    rep(_,loop){
        cin>>n;
        string str[n];
        rep(i,n) cin>>str[i];
        char c = 'a';
        maxi=0;
        for(ll hoge=0;hoge<5;hoge++,c++){
            ll curchar=0;
            vector<ll> v(n);
            rep(k,n){
                curchar=0;
                rep(j,str[k].length()){
                    if(str[k][j]==c) curchar++;
                }
                // 正:今見ている文字が全体に対してオーバーしている
                v[k]=curchar-(str[k].length()-curchar);
            }
            sort(rall(v));
            //cout<<c<<endl;
            //rep(i,n) cout<<v[i]<<" ";
            //ln;
            ll tot=1;
            ll firstf=1;
            ll cntr=0;
            while(tot>0&&cntr<n){
                if(firstf){
                    tot=0;firstf=0;
                }
                tot+=v[cntr];
                cntr++;
            }
            if(tot<=0) cntr--;
            maxi=max(cntr,maxi);
        }
        cout<<maxi<<endl;
    }


    return 0;
}
