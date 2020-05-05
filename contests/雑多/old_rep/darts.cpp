#include <iostream>
#include <climits>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// 入力
int n, W;
vector<int> weight;
int value[1003][4005]={};
int p;
// DPテーブル
int dp[110][10010];

int main() {
  cin >> n >> W;
  for (int i = 0; i < n; ++i) {cin >>  p;weight.push_back(p);};
  sort(weight.begin(),weight.end(),std::greater<int>());
  for(int i=n;i<n*4;i++) {
      weight[i]=weight[i%n];
      printf("%d ",weight[i]);
  }
    n=n*4;
  // DP初期条件: dp[0][w] = 0
  for (int w = 0; w <= W; ++w) dp[0][w] = 0;

  // DPループ
    for (int i = 0; i < n; ++i) {
    for (int w = 0; w <= W; ++w) {
     // if (w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
     // else dp[i+1][w] = dp[i][w];
    }
  }

  for(int i=0;i<n;i++){
      for(int j=0;j<W;j++){
          //printf("%d ",dp[i][j]);
          printf("%d%d ",j,value[i][j]);
      }
      printf("\n");
  }
      printf("\n");

    for(int i=0;i<n;i++){
      for(int j=0;j<W;j++){
          printf("%d ",dp[i][j]);
          //printf("%d ",value[i][j]);
      }
      printf("\n");
  }

  cout << dp[n][W] << endl;
}