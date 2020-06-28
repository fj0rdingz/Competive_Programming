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
#include <bits/stdc++.h>
using namespace std;
map< int64_t, int > prime_factor(int64_t n) {
  map< int64_t, int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>d;
        rep(_,d){
            f=0;
        ll th=0;
        ll tw=0;
        int n;
        cin >> n;
        //cout << n << ":";
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        for(auto p : prime_factor(n)) {
            while(p.second--) {
                if(p.first==3){
                    th++;
                }else if(p.first==2){
                    tw++;
                }else{
                   // cout<<"この数値"<<p.first<<endl;
                    f=1;
                }
            }
        }
       // cout<<n<<" "<<tw<<" "<<th<<" "<<f<<endl;
            if(f==1){
                cout<<-1<<endl;
            }else if(th<tw){
                cout<<-1<<endl;
            }else{
                ll num=0;
                num+=tw;
                th-=tw;
                num+=th*2;
                cout<<num<<endl;
            }

        
        //cout << endl;
    }

    return 0;
}
