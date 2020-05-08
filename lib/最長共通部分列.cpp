//最長共通部分列 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
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
int dp[2000][2000];
vector<int> w(2000);
vector<int> v(2000);

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    int maxi=0,f=0,sum=0;
    int i;
    double h;
    int n,x,m;
    int a,b,d,c;
    //int e,weight;
    int target;
    //targetが目的値、nが個数
    cin>>n;

    rep(_,n){
        string str1,str2;
        cin>>str1>>str2;

        //DPテーブルを0で初期化
        for(ll i=0;i<str1.length()+1;i++){
            for(ll j=0;j<str2.length()+2;j++){
                dp[i][j]=0;
            }
        }
        rep(i,str1.length()){
            rep(j,str2.length()){
                //文字が一致したとき
                if(str1[i]==str2[j]){
                    dp[i+1][j+1]=dp[i][j]+1;
                //文字が一致しなかったときは、str1の中でマッチングしているものとstr2の中でマッチングしているものの中で大きいものを採用
                }else{
                    dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        cout<<dp[str1.length()][str2.length()]<<endl;;
    }


    return 0;
}
