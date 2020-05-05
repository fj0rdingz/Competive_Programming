#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<fstream>

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
       
    int i,j,k,p=1,q=1;
    long n,m,tmp;
    string s[200000];
    string str;
    ll sum=0;
    int strr[200005];
    cin>>m;
    rep(i,m){
        int f=0;
        cin>>n;
        vector<int> a(n);

        rep(i,n)   cin >> a[i];
        sort(a.begin(),a.end());
        rep(j,n-1){
            if(a[j+1]-a[j]==1) f=1;
        }
        if(f==1) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}