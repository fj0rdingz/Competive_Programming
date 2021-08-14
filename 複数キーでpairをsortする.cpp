// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
ll target;

/*

型を使いたいように合わせる！！！！！！！！！！！！！！！！！！！！！！！！！！！！

*/
bool comp(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    // secondがconflictしない場合は入れておいたほうが良い
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        // どちらも同じ
        return true;
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    ll maxi=0,f=0,sum=0,mini=INF;
    string str,str1,str2;
    ll i;
    double h;
    ll n,x,m;
    ll a,b,d,c;
    //multiset<pair<string,ll>> s;
    cin>>n;
    vector<pair<string, ll> > pairs(n);
    vector<pair<string, ll> > moto(n);

    rep(i,n){
        cin>>str>>m;
        pairs[i]=make_pair(str,m);
        moto[i]=pairs[i];
    }
    sort(pairs.begin(), pairs.end(),comp);

    rep(i,n){
        rep(j,n){
            if(moto[j].first.compare(pairs[i].first)==0&&moto[j].second==pairs[i].second){
                cout<<j+1<<endl;
                break;
            }
        }
    }

    return 0;
}
