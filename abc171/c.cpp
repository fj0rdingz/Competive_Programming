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

    ll a,b,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<char> v;
    while(n>0){
        char c='a';
        c--;
        ll num=n%26;
        c+=num;
        if(c=='`') c='z';
        v.push_back(c);
        if(n==26) break;
        else if(n==702) n=26;
        else if(n==18278) n=702;
        else if(n==475254) n=18278;
        else if(n==475254*26+1) n=475254;
        else if(n==475254*26*26+1) n=475254*26;
        else if(n==475254*26*26*26+1) n=475254*26*26;
        else if(n==475254*26*26*26*26+1) n=n=475254*26*26*26;
        else if(n==475254*26*26*26*26*26+1) n=n=475254*26*26*26*26;
        else if(n==475254*26*26*26*26*26*26+1) n=n=475254*26*26*26*26*26;
        else if(n==475254*26*26*26*26*26*26*26+1) n=n=475254*26*26*26*26*26*26;

        else n/=26;
    }
    rep(i,v.size()){
        cout<<v[v.size()-i-1];
    }
    cout<<endl;

    return 0;
}
