#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
int minad,nowad=0;
int anss[100000];

#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;

using namespace std;
void df(int a[],int n,int ans[]){
    if(minad==nowad){
        return;
    }else{
        ans[n+1]-=a[n]/2;
        ans[n]-=a[n]/2;
        if(ans[n]<0) return;
        df(a,n+1,ans);
    }


}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int i,j,k;
    long n,m,tmp;
    int a[100000];
    int ans[100000];
    string s[200000];
    int min=100000004;
    int minnum=0;

    cin >> n;
    rep(i,n) cin>>a[i];
    rep(i,n) ans[i]=a[i];
    rep(i,n) anss[i]=a[i];

    rep(i,n){
        if(a[i]<min){
            min=a[i];
            minnum=i;
        }
    }
    minad=minnum;
    k=a[minnum];
    while(1){
    df(a,k,ans);
    k=k-2;
    }
    
    cout<<ans[n-1]<<endl;
    rep(i,n-1) cout<<ans[i]<<endl;
    //cout<< *s << endl;

    return 0;
}