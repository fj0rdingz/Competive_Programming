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
 
    int a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    int k;
    cin>>k>>n;
    int v[k+1];
    int w[(k+1)+(k+1)];
    rep(i,k+1){
        v[i]=i;
        //cout<<i<<" ";
    }
    //ln;
    rep(i,k+1){
        rep(j,k+1){
            w[i*(k+1)+j]=v[i]+v[j];
            cout<<i*(k+1)+j<<" "<<v[i]+v[j]<<" "<<endl;;
        }
    }
    //ln;
    map<int,int> mp;
    rep(i,(k+1)*(k+1)){
        rep(j,k+1){
            mp[w[i]+v[j]]++;
        }
    }
    cout<<mp[n]<<endl;
    
    return 0;
}
