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
    cin>>loop;
    rep(_,loop){
        ll h,w;
        cin>>h>>w>>n;
        vector<string> s(0);
        vector<vector<bool>> tf(h+2,vector<bool> (w+2));
        rep(i,h+2)rep(j,w+2) tf[i][j]=false;
        //cin>>sx>>sy>>gx>>gy;
        s.resize(h+2);
        rep(i,h) cin>>s[i+1];
        rep(i,w+2) s[0]+='#';
        rep(i,w+2) s[h+1]+='#';
        rep(i,h) s[i+1].insert(s[i+1].begin(),'#');
        rep(i,h) s[i+1].push_back('#');
        
        REP(i,1,h+1){
            REP(j,1,w+1){
                if(s[i][j]=='.'||s[i][j]=='#') continue;
                bool isok = false;
                REP(k,1,n+1){
                    if(s[i-k][j-k]=='*'&&s[i-k][j+k]=='*'){
                        if(k==n) isok=true;
                    }else{
                        break;
                    }
                }
                if(!isok) continue;
                tf[i][j]=true;
                REP(k,1,30){
                    if(s[i-k][j-k]=='*'&&s[i-k][j+k]=='*'){
                        tf[i-k][j-k]=true;
                        tf[i-k][j+k]=true;
                    }else{
                        break;
                    }
                }
            }
        }
        bool t=true;
        REP(i,1,h+1){
            REP(j,1,w+1){
                if(s[i][j]=='*'&&tf[i][j]==false) t=false;
                //else if
            }
        }
        if(t) YES;
        else NO;
    }


    return 0;
}
