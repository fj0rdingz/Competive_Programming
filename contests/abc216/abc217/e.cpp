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
    priority_queue<ll,vector<ll>,greater<ll>> q;
    vector<ll> buffer(0);
    ll ptr=0;
    ll bufptr=0;
    rep(i,n){ 
        cin>>a;
        if(a==1){
            cin>>b;
            buffer.push_back(b);
        }else if(a==2){
            if(q.empty()){
                cout<<buffer[bufptr]<<endl;
                buffer[bufptr]=INF;
                bufptr++;
            }else{
                cout<<q.top()<<endl;
                q.pop();
            }
        }else{
            rep(j,buffer.size()){
                if(buffer[j]!=INF) q.push(buffer[j]);
                buffer[j]=INF;
            }
            buffer.clear();
            bufptr=0;
        }
    }/*
ln; cout<<"q:";
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }ln;
    cout<<"buf:";
    rep(i,buffer.size()){
        cout<<buffer[i]<<" ";
    }ln;
*/
    return 0;
}
