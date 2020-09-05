#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

vector<int> a;

// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(int key) {
    int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}
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

    ll i,j,k,l,m,n,w,x,y,z,q,tmp,sum=0;
    string str;
    cin>>n;
    vector<int> a(n);
    vector<pair<ll,ll>> p(n);
    rep(i,n){
        cin>>k>>l;
        p[i]=make_pair(k+(n-1)*l,l);
    }
       // sort(p.begin(),p.end(),my_compare);

    rep(i,n){
        sort(p.begin(),p.end(),my_compare);

        sum=max(sum,p[0].first);
        //cout<<sum<<endl;
        p.erase(p.begin());

        rep(j,p.size()){
        p[j].first-=p[j].second;
        }

    }
    //sum=max(sum,p[0].first-p[0].second);

    cout<<sum<<endl;
    return 0;
}