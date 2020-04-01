#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;

using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int i,j,k,d;
    long n,m,tmp,count=0;
    long sum=0;
    double dou;
    int a[10][10];

    cin >> n ;
    cin >> d ;
    rep(i,n){
        rep(j,d){
            cin>>a[i][j];
        }
    }
    rep(i,n){
        for(j=i+1;j<n;j++){
            rep(k,d){
                sum+=(a[i][k]-a[j][k])*(a[i][k]-a[j][k]);
            }
            dou=sqrt((double)sum);
   //         cout << dou << endl;
            if(ceil(dou) == floor(dou)){
                count++;
            }
            sum=0;
        }
    }



    cout<< count << endl;

    return 0;
}