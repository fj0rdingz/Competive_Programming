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

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n;
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        vector<ll> w(n);
        rep(i,n)w[i]=v[i];
        sort(all(w));
        vector<ll> lq;
        vector<ll> rq;
        vector<ll> minq;
        REP(i,0,n-1){
            //rep(j,n) cout<<v[j]<<" ";
            //ln;
            ll mindex=0;
            ll mini=INF;
            REP(j,i,n){
                if(v[j]<mini){
                    mini=v[j];
                    mindex=j;
                }
            }
            if(i==mindex) continue;
            lq.push_back(i+1);
            rq.push_back(n);
            minq.push_back(mindex-i);
            vector<ll> newarr;
            rep(j,i)newarr.push_back(v[j]);
            for(ll j=mindex;j<n;j++) newarr.push_back(v[j]);
            for(ll j=i;j<mindex;j++) newarr.push_back(v[j]);
            rep(j,n) v[j]=newarr[j];

        }
        cout<<lq.size()<<endl;
        rep(i,lq.size()){
            cout<<lq[i]<<" "<<rq[i]<<" "<<minq[i]<<endl;
        }
    }


    return 0;
}
