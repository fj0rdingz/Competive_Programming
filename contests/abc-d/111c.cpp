// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

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

bool my_compare(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
        // return a.first < b.first; // 昇順
        return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;

    cin>>n;
    vector<ll> v(n);
    rep(i,n)   cin >> v[i];
    multiset<ll> odd;
    multiset<ll> even;
        ll onajif=-1;
    rep(i,n-1){
        if(v[i]!=v[i+1]) onajif=0;
    }
    if(onajif){
        cout<<n/2<<endl;
        return 0;
    }

    rep(i,n){
        if(i%2){
            odd.insert(v[i]);
        }else{
            even.insert(v[i]);
        }
    }
    vector<pair<ll,ll>> od(odd.size());
    vector<pair<ll,ll>> ev(even.size());
    ll j=0;
    for(auto itr=odd.begin();itr!=odd.end();++itr,++j){
        od[j]=make_pair(odd.count(*itr),*itr);
    }
    j=0;
    for(auto itr=even.begin();itr!=even.end();++itr,++j){
        ev[j]=make_pair(even.count(*itr),*itr);
    }
    sort(od.begin(),od.end(),my_compare);
    sort(ev.begin(),ev.end(),my_compare);
    if(od[0].second!=ev[0].second){
        cout<<n-od[0].first-ev[0].first<<endl;
    }else if(od[0].first+ev[1].first>od[1].first+ev[0].first){
        cout<<n-od[0].first-ev[1].first<<endl;
    }else{
        cout<<n-od[1].first-ev[0].first<<endl;
    }
    
    return 0;
}
