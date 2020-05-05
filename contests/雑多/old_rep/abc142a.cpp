#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;

using namespace std;


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    int i,j,k;
    long n,m,tmp;
    int a[10000];
    string s[200000];
    int sum=0;
    double d;
    cin >> n;
    rep(i,n){
        if(i%2==0) sum++;
    }
    d=(double)sum/n;


    cout<< d << endl;

    return 0;
}