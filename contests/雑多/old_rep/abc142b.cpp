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
    int a[100005];
    int num=0;
    string s[200000];

    cin >> n>>k;
    rep(i,n) cin>>a[i];
    rep(i,n){
        if(a[i]>=k){
            num++;
        }
    }


    cout<< num << endl;

    return 0;
}