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
       
    int i,j,k,f=0;
    long n,m,tmp;
    int a[100005];
    vector<int> num;
    string s[200000];
 
    cin >> n;
    num.resize(n);
    rep(i,n) cin>>num[i];
    for(i=0;i<n;i++){
        for(j=0,f=0;j<sizeof(num);j++){
            if(num[j]==(i+1)){
                printf("%d ",j+1);
                f++;
                a[f]=j;
            }
        }
        
    }

    return 0;
}