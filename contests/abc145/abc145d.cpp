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

ll combination(ll n, ll r) {
  if ( r * 2 > n ) r = n - r;
  ll dividend = 1;
  ll divisor  = 1;
  for ( ll i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
    if(dividend%divisor==0) {
        dividend=dividend/divisor;
        divisor=1;
    }

  }
  return dividend / divisor%1000000007;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    ll i,j,k,p=1,q=1;
    ll n,m,tmp;
    ll x,y;
    string s[200000];
    string str;
    ll sum=0;
    ll strr[200005];
    ll ans=0;
    cin>>x>>y;
    ll f=0;
    if((x+y)%3!=0) f=1;
    x=(x+y)/3;
    y=(x+y)/3;
    if(x*2<y||y*2<x) f=1;
    //vector<vector<long long int> > v(x+1,vector<long long int>(y+1,0));



    if(f==1){
        cout<<0<<endl;
    }else{
        printf("%lld\n",combination(x, y));
    }

    return 0;
}