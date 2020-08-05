// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>d;
    rep(_,d){
            ll zero = 0;
            ll one =0;
            cin>>a;
            cin>>str;
        rep(i,str.length()){
            if(str[i]=='0'){
                if(one>=1) {
                    one--;
                    zero++;
                }else{
                    zero++;
                }
            }else{
                if(zero>=1){
                    zero--;
                    one++;
                }else{
                    one++;
                }
            }
        }
        cout<<zero+one<<endl;
        zero=0;
        one=0;
        stack<ll> z;
        stack<ll> o;
        rep(i,str.length()){
            if(str[i]=='0'){
                if(o.size()>=1) {
                    one--;
                    zero++;
                    cout<<o.top()<<" ";
                    z.push(o.top());
                    o.pop();
                }else{
                    zero++;
                    z.push(zero);
                    cout<<zero<<" ";

                }
            }else{
                if(z.size()>=1){
                    zero--;
                    one++;
                    cout<<z.top()<<" ";
                    o.push(z.top());
                    z.pop();
                }else{
                    one++;
                    o.push(one);
                    cout<<one<<" ";
                }
            }
        }
        ln;
    }
    return 0;
}
