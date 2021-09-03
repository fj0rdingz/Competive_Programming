#include <bits/stdc++.h>
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    int a,mini=1000000001;
    int n,m;
    cin>>n>>m;
    set<int> s1;
    set<int> s2;
    for(int i=0;i<n;i++) {
        cin>>a;
        s1.insert(a);
    }
    for(int i=0;i<m;i++) {
        cin>>a;
        s2.insert(a);
    }
    auto i1=s1.begin();
    auto i2=s2.begin();
    mini=min(abs(*i1-*i2),mini);
    while(i1!=s1.end()&&i2!=s2.end()){
        if(*i1<*i2){
            i1++;
        }else if(*i1>*i2){
            i2++;
        }else{
            break;
        }
        mini=min(abs(*i1-*i2),mini);
    }
    printf("%d",mini);
    return 0;
}
