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

bool my_compare(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
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
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        vector<ll> v(n);
        vector<ll> x(n);
        vector<ll> w(n);
        map<ll,ll> ans;
        //vector<ll> ans(n);
        rep(i,n)   cin >> v[i];
        rep(i,n)   cin >> x[i];
        set<ll> s;
        ll t=v[0];
        ll ban;
        rep(i,n){
            if(t==x[i]) ban=i;
        }
        ll j=0;
        for(ll i=ban;i<n;i++){
            w[j]=x[i];
            j++;
        }
        ll nu=0;
        for(;j<n;j++){
            w[j]=x[nu];
            nu++;
        }
        //rep(i,n) cout<<w[i]<<" ";
        //ln;
        vector<pair<ll,ll>> vp(n);
        vector<pair<ll,ll>> wp(n);
        rep(i,n){
            vp[i].first=v[i];
            vp[i].second=i;
            wp[i].first=w[i];
            wp[i].second=i;
        }
        sort(vp.begin(),vp.end(),my_compare);
        sort(wp.begin(),wp.end(),my_compare);


        rep(i,n){
            b=vp[i].second-wp[i].second;
            ans[b]++;
            s.insert(b);
        }
        ll num=0;
        for(auto itr=s.begin();itr!=s.end();itr++){
            //cout<<ans[*itr]<<endl;
            num=max(ans[*itr],num);
        }
        cout<<num<<endl;

    
    return 0;
}
