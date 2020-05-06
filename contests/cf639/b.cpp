// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    vector<ll> v(100000);
    v[0]=0;
    for(ll i=1;i<=99999;i++){
        v[i]=v[i-1]+2*i+i-1;
        //cout<<i<<" "<<v[i]<<endl;
    }
    /*
    cout<<v[99997]<<endl;
        cout<<v[99998]<<endl;
        cout<<*(--v.end())<<endl;
    cout<<1000000000<<endl;*/

        cin>>n;
    ll k;
    //h[0]にはアクセスしない！！
    rep(_,n){
        cin>>k;
        while(1){
            if(k==1||k==0) break; 
            auto itr=lower_bound(v.begin(),v.end(),k);
            //cout<<k<<" "<<*itr<<" "<<*(--itr)<<endl;
                        if(*itr>k) --itr;

            k=k-*itr;
            sum++;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
