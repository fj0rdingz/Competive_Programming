// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll k;
    cin>>n>>m>>k;
    vector<ll> v(n);
    vector<ll> w(m);
    vector<ll> x(m);

    rep(i,n) cin>>v[i];
    rep(i,m) cin>>w[i];
    x[0]=w[0];
    //cout<<"xのるいせきわ"<<endl;
    for(ll i=1;i<m;i++) {
        x[i]=x[i-1]+w[i];
        //cout<<x[i]<<" ";
    }
   // cout<<endl;
    ll wi=0;
    rep(i,n){
        wi+=v[i];
        if(wi<=k) maxi=i+1;
    }
    ll wu=0;
    rep(i,m){
        wu+=w[i];
        if(wu<=k) maxi=max(maxi,i+1);
    }

    ll wa=0;
    rep(i,n){
        ll books=0;
        wa+=v[i];
        if(wa>k)  continue;
        books=i+1;               //index的に1を足す

        if(wa!=k){
        auto xbooks=lower_bound(x.begin(),x.end(),k-wa);
        if(*xbooks!=k-wa) xbooks--;
        //Bの棚から本を選ぶ場合
        if(xbooks!=x.end()){
        
            ll index=xbooks-x.begin();
            index++;
            ////cout<<k-wa<<"以下で検索"<<*xbooks+wa<<"<"<<k<<"のはず"<<endl;
            //cout<<"index:"<<index<<"数"<<*xbooks<<endl;
            books+=index;
        }

        }
        maxi=max(books,maxi);
    }

cout<<maxi<<endl;
    return 0;
}
