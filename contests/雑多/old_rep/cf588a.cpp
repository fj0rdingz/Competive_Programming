#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#define F first
#define S second
#define R cin>>
#define Z class
#define ll long long
#define ln cout<<'\n'
#define in(a) insert(a)
#define pb(a) push_back(a)
#define pd(a) printf("%.10f\n",a)
#define mem(a) memset(a,0,sizeof(a))
#define all(c) (c).begin(),(c).end()
#define iter(c) __typeof((c).begin())
#define rrep(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define tr(it,c) for(iter(c) it=(c).begin();it!=(c).end();it++)

using namespace std;


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    int i,j=0,k;
    long n,m,tmp;
    int a[10000];
    string s[200000];

    for(i=0;i<4;i++)cin >> a[i];
    sort(a,a+4);

    //rep(i,4) cout<<a[i]<<endl;
    if(a[0]+a[3]==a[1]+a[2]){
        j=1;
    }else if(a[3]==a[0]+a[1]+a[2])j=1;

    if(j==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    //cout<< *s << endl;

    return 0;
}