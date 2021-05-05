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
    cin>>str;
    deque<char> q;
    bool state=true;
    rep(i,str.length()){
        if(str[i]=='R'){
            if(state) state=false;
            else state=true;
        }else{
            if(q.empty()){
                q.push_back(str[i]);
                continue;
            }
            if(state){
                if(q.back()==str[i]) q.pop_back();
                else q.push_back(str[i]);
            }else{
                if(q.front()==str[i]) q.pop_front();
                else q.push_front(str[i]);
            }
        }
    }
    if(state){
        while(!q.empty()){
            cout<<q.front();
            q.pop_front();
        }
    }else{
        while(!q.empty()){
            cout<<q.back();
            q.pop_back();
        }
    }
ln;
    return 0;
}
