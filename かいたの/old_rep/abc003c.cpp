#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;

using namespace std;


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
     int n,m,p=0;
     int a[305][305];
cin>>n;
 
  m=n;
  n=n*n;
 
  for(int i=0;i<m;i++){
    int k=0;
    if(i%2){
      for(int j=p+1,k=0;j<m+p+1;j++,k++){
        a[i][k]=j;
    }
    }else{
      
      for(int j=p+m;j>p;j--,k++){
        a[i][k]=j;
      }
    }
    p=p+m;
   // cout<<endl;
  }
  rep(i,m){

    rep(j,m) {
      cout<<a[j][i]<<" ";
    }
    cout<< endl;
  }
  return 0;
}