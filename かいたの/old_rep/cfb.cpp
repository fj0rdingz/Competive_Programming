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
       
    int i,j,k;
    long n,m,tmp;
    string s[200000];
    string str;
    double sum=0,sun=0;
    int f=0;
    priority_queue<double> q;
    int g=0;
    cin >> n;

   for (i=n; i>0 ; i--) {
       cin>>tmp;
        q.push(tmp);
    }
    for(i=0;i<n/2;i++){
        if(n%2&&g==0) i--; 
        g=1;
        sum+=q.top();
        q.pop();
    }
    while(!q.empty()){
        sun+=q.top();
        q.pop();
    }
    cout<<sum*sum+sun*sun<<endl;
    return 0;
}