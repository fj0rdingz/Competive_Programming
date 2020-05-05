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
    long n,m,tmp,max=0,min,minnum,maxnum,max2=0;
    string s[200000];

    cin >> n;
    rep(i,n){
        cin>>j;
        if(max<j) {
        max=j;
        maxnum=i;
        }else if(max2<j){
            max2=j;
        }
    }
    rep(i,n){
        if(i==maxnum){
                  cout << max2 << endl;
        }else{
        cout << max << endl;
            }    
        }
    


    cout<< *s << endl;

    return 0;
}