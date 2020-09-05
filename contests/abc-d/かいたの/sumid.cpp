#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    ll f=0;
    string str;
    cin>>n;
    cin>>str;
    set<char> s;
    set<string> ss;

    set<string> ans;
    rep(i,str.length()-2){
        if(s.find(str[i])!=s.end()) continue;
            s.insert(str[i]);
        for(j=i+1;j<str.length()-1;j++){
            if(ss.find(str.substr(i,1).append(str.substr(j,1)))!=ss.end()) continue; 
            ss.insert(str.substr(i,1).append(str.substr(j,1)));
            for(k=j+1;k<str.length();k++){
                ans.insert(str.substr(i,1).append(str.substr(j,1)).append(str.substr(k,1)));
            }
        }
    }
    cout<<ans.size();
    return 0;
}