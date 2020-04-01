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
       
    ll i,j,k,p=1,q=1;
    ll n,m,tmp;
    string s[200000];
    string str;
    ll sum=0;
    ll strr[200005];
    cin>>n;
    vector<int> d(n-2);
    vector<int> e(n-2);

    int a,b,c;
    rep(i,n-2){
        cin>>a>>b>>c;
        d[a]++;
        d[b]++;
        d[c]++;
    }
    rep(i,n-2) e[i]=d[i];
    sort(d.begin(),d.end());
    if(n%2){
        for(j=0;j<n;j=j+2){
            cout<<d[j]<<" ";
        }
        for(j=n;j>0;j=j-2){
            cout<<d[j]<<" ";
        }
    }else{
        for(j=0;j<n;j=j+2){
            cout<<d[j]<<" ";
        }
        for(j=n-1;j>0;j=j-2){
            cout<<d[j]<<" ";

        }
    }
    return 0;
}