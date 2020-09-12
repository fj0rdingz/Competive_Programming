//コイン問題(配るDP) http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A
//要は何枚のコインで支払えますか問題。

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
    //int e,weight;
    int target;
    //targetが目的値、nが個数
    cin>>target>>n;
    
    //サイズをいい感じにする
    v.resize(n+1);

    //i番目のコインの値段を入力
    rep(i,n){
        cin>>v[i];
    }

    sort(v.begin(),v.end(),greater<int>());

    //DPテーブルをINFで初期化
    for(ll i=0;i<n+1;i++){
        for(ll j=0;j<target+1;j++){
            dp[i][j]=INF;
        }
    }
    //0円は0枚で支払えます。
    dp[0][0]=0;

    REP(i,0,n){
        rep(j,target+1){

            //dpが次のコインを見に行っても必ず現在支払えているものは支払えるべきみたいな。現状維持用。
            dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
            
            //今参照しているコインが支払いで使えるようになったら
            if(j>=v[i]){
                //次の状態に今参照しているコインを加えたときとと加えないときで少ないほうを選択
                dp[i+1][j]=min(dp[i+1][j],dp[i][j-v[i]]+1);
                //今参照しているコインを複数枚加えたときのほうが枚数が少なくなるかをしらべる
                dp[i+1][j]=min(dp[i+1][j],dp[i+1][j-v[i]]+1);
            }
            //cout<<dp[i+1][j]<<" ";
        }
        //cout<<endl;
    }

    //dpテーブルのこたえにあたる部分を出力
    //今回は配るDPなのでn番目を出力しているところに注意!
    cout<<dp[n][target]<<endl;


    return 0;
}
