// lcmとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>m;
    rep(_,m){
        cin>>n;
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        ll hand=0;
        ll asum=0,bsum=0,sum=0;
        ll lasta=0;
        ll lastb=0;
        auto itr=v.end();
        ll koko=0;
        f=1;
        while(v.size()!=0){
            //Alice
            itr=v.begin();
            lasta=0;
            while(lasta<=lastb&&itr!=v.end()||f){
                f=0;
                lasta+=*itr;
                asum+=*itr;
                itr=v.erase(itr);
            }
            sum++;
            //Bob
            if(itr==v.end()) break;
            koko=0;
            itr=v.end();
            itr--;
            lastb=0;
            //ll ft=1;
            //v.begin()のあたりが値入ってるか微妙
            while(lasta>=lastb&&itr!=v.begin()-1){
                lastb+=*itr;
                bsum+=*itr;
                itr--;
                v.erase(itr+1);
            }
            sum++;
            
        }
        cout<<sum<<" "<<asum<<" "<<bsum<<endl;
    }

    return 0;
}