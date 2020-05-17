// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
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

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str,sub;
    ll h,w;
    string str1;
    cin>>n;
    //考えるのが面倒なのでn*nで確保
    vector<vector<ll>> v(n,vector<ll> (n));
    //考えるのが面倒なので-INFで初期化
    rep(i,n) rep(j,n) v[i][j]=-INF;
    //入力
    rep(i,n){
        for(ll j=i+1;j<n;j++){
            cin>>v[i][j];
        }
    }
    //3進数にするからnの3乗倍する数を上限
    ll pows=pow(3,n);
    //最適解がマイナスになる可能性があるので-INFで初期化
    maxi=-INF;

    //本処理、3のn乗回ループ
    rep(k,pows){

        //組み分け用配列
        vector<ll> tmp(n);

        //0bit目から代入
        ll bit=0;

        //カウンタkを3進数化,tmpにkの3進数版が入る
        for(ll j=k;j!=0;j/=3,bit++){
            tmp[bit]=j%3;
        }

        //合計を0で初期化
        sum=0;

        //iとjが同じグループかを判定
        rep(i,n){
            for(ll j=i+1;j<n;j++){
                
                //同じグループだったら合計に足す
                if(tmp[i]==tmp[j]) sum+=v[i][j];
                
            }
        }
        //最大値を採用
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
