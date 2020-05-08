// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000019
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int dp[3000][60000];
vector<int> w(2000);
vector<int> v(2000);

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    int maxi=0,f=0,sum=0;
    string str,str1,str2;
    int i;
    double h;
    int n,x,m;
    int a,b,d,c;
    int e,weight;

    //nが宝石数、weightがバッグサイズ
    cin>>n>>weight;
    
    //サイズをいい感じにする
    w.resize(n+1);
    v.resize(n+1);

    //i番目の宝石の価値と重さを入力
    rep(i,n){
        cin>>v[i]>>w[i];
    }

    //DPテーブルを0で初期化(負のvが入るときは-INFとかにしたほうがよい?)
    for(ll i=0;i<n;i++){
        for(ll j=0;j<weight+1;j++){
            dp[i][j]=0;
        }
    }

    //dpテーブル0行目の入力
    rep(i,weight+1) {
        if(i>=w[0]) dp[0][i]=v[0];
        else dp[0][i]=0;
    }

    //DPテーブルの1行目からの入力
    REP(i,1,n){
        rep(j,weight+1){

            //i個めの宝石が入るだけのバッグサイズになったら、過去のDPテーブル+今の宝石したときの価値と今の宝石を入れない場合で比較し、価値が高いほうを入れる
            if(j>=w[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);

            //i個めの宝石が入らないバッグサイズだったら、その宝石を入れる前の状態を引き継ぐのみ
            else dp[i][j]=dp[i-1][j];
        }
    }

    //dpテーブルのこたえにあたる部分を出力
    //i軸はn-1番目でj軸がw番目なところに注意する!
    cout<<dp[n-1][weight]<<endl;


    return 0;
}
