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
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    rep(i,n)   cin >> v[i];
    sort(v.begin(),v.end());
    set<ll> s;
    if(v[0]==1){
        cout<<0<<endl;
        return 0;
    }

    rep(i,n){
        if(i!=0){
            if(v[i-1]==v[i]) continue;
        }
        f=0;
        vector<ll> tten;
        vector<ll> ss;
        for(auto p : prime_factor(v[i])) {
            if(s.find(p.first)!=s.end()) f=1; 
            ss.push_back(p.first);
            while(p.second--){
                tten.push_back(p.first);
            }
        }
        if(f==0){
            for(ll bit=0;bit<(1<<tten.size());++bit){
                ll num=1;
                for(ll j=0;j<tten.size();++j){
                    if(bit&(1<<j)){
                        num*=tten[j];
                    }
                }
                if(s.find(num)!=s.end()) f=1;
            }
        }
        if(f==0){
            s.insert(v[i]);
        }
    }

    if(s.size()==1){
        cout<<0<<endl;
    }else{
        cout<<s.size()<<endl;
    }


    return 0;
}
