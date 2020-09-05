#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,q,tmp,sum=0;
    string str;
    cin>>n;
    double maxi=0;
    vector<int> a(n);
    vector<int> b(n);
    multiset<double> s;
    rep(i,n)   {
        cin >> a[i]>>b[i];
    }
    rep(i,n-3)REP(j,i+1,n-2)REP(k,j+1,n-1)REP(l,k+1,n){
        s.insert(sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])));
        s.insert(sqrt((a[k]-a[j])*(a[k]-a[j])+(b[k]-b[j])*(b[k]-b[j])));
        s.insert(sqrt((a[k]-a[l])*(a[k]-a[l])+(b[k]-b[l])*(b[k]-b[l])));
        s.insert(sqrt((a[i]-a[k])*(a[i]-a[k])+(b[i]-b[k])*(b[i]-b[k])));
        s.insert(sqrt((a[k]-a[i])*(a[k]-a[i])+(b[k]-b[i])*(b[k]-b[i])));
        s.insert(sqrt((a[l]-a[j])*(a[l]-a[j])+(b[l]-b[j])*(b[l]-b[j])));
    }
    for(auto itr=s.begin();itr!=s.end();itr++){
        if(s.count(*itr)>=4){
            maxi=max(maxi,*itr);
        }
            //cout<<*itr<<endl;

    }
    cout<<maxi<<endl;
    return 0;
}