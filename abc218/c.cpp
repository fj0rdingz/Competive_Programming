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
    cin>>n;
    vector<string> s(n);
    vector<string> t(n);
    rep(i,n) cin>>s[i];
    rep(i,n) cin>>t[i];
    s.resize(n+2);
    rep(i,n+2) s[0]+='.';
    rep(i,n+2) s[n+1]+='.';
    rep(i,n) s[i+1].insert(s[i+1].begin(),'.');
    rep(i,n) s[i+1].push_back('.');
    ll sl=INF;
    ll sr=-1;
    ll tl=INF;
    ll tr=-1;
    ll su=INF;
    ll sd=-1;
    ll tu=INF;
    ll td=-1;
    rep(i,n){
        rep(j,n){
            if(s[i][j]=='#') {
                sl=min(sl,j);
                sr=max(sr,j);
                su=min(su,i);
                sd=max(su,i);
            }
        }
    }
    rep(i,n){
        rep(j,n){
            if(t[i][j]=='#') {
                tl=min(tl,j);
                tr=max(tr,j);
                tu=min(tu,i);
                td=max(tu,i);
            }
        }
    }
     f=0;
     ll state=sd-su+1;
     ll ttate=td-tu+1;
     ll syoko=sr-sl+1;
     ll tyoko=tr-tl+1;
    string s1[state];
    string t1[ttate];
    rep(i,state){
        s1[i]=s[su+i].substr(sl,syoko);
    }
    rep(i,ttate){
        t1[i]=t[tu+i].substr(tl,tyoko);
    }
    if(state==ttate&&syoko==tyoko){
    //左右、上下の長さが同じ
        bool hantei=true;
        rep(i,state){
            rep(j,syoko){
                if(s1[i][j]!=t1[i][j]) hantei=false;
            }
        }
        if(hantei) f=1;
        hantei=true;
        rep(i,state){
            rep(j,syoko){
                if(s1[i][j]!=t1[state-i-1][syoko-j-1]) hantei=false;
            }
        }
        if(hantei) f=1;
    }
    if(state==tyoko&&syoko==ttate){
        bool hantei=true;
        rep(i,state){
            rep(j,syoko){
                if(s1[i][j]!=t1[j][state-i-1]) hantei=false;
            }
        }
        if(hantei) f=1;
        hantei=true;
        rep(i,state){
            rep(j,syoko){
                if(s1[i][j]!=t1[syoko-1-j][i]) hantei=false;
            }
        }
        if(hantei) f=1;
    }
    if(f) Yes;
    else No;
    return 0;
}
