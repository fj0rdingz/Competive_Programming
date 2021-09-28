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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n>>k;
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        if(n==k){
            rep(i,n) if(v[i]==1) f=1;
            if(f) cout<<-1<<endl;
            else  cout<<0<<endl;
            continue;
        }
        ll tate=1;
        ll yoko=n;
        if(n%k==0){
            yoko=n/k;
            tate=n/yoko;
        }
        vector<vector<ll>> w(tate,vector<ll> (0));

        if(tate=1){
            for(ll i=0;i<i*k;i+=k){
                if(i!=0) w[0].push_back(v[i%n]);
                else w[0].push_back(v[0]);
            }
            for(ll i=0;i<i*k;i+=k){
                if(i!=0) w[0].push_back(v[i%n]);
                else w[0].push_back(v[0]);
            }

        }else{
            rep(j,yoko){
                rep(i,tate){
                    w[i].push_back(v[i*tate+j]);
                }
            }
            rep(j,yoko){
                rep(i,tate){
                    w[i].push_back(v[i*tate+j]);
                }
            }
        }
        yoko*=2;
        maxi=0;
        rep(i,tate){
            ll cur=0;
            rep(j,yoko){
                if(w[i][j]==1){
                    cur++;
                    if(cur>maxi) maxi=cur;
                }else{
                    cur=0;
                }
            }
        }
        if(yoko==maxi) cout<<-1<<endl;
        else cout<<maxi<<endl;
    }


    return 0;
}
