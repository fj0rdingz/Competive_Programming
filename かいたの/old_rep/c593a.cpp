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

int a[20010];

// DPテーブル
bool dp[20010][2000010];

int main() {
  int  a,b,c,n,d,e,f;
  cin>>n;
  for(int i=0;i<n;i++){
  cin >> a>>b>>c;
  d=a;e=b;f=c;
  c=c/2;
  b=b-c/2;
  b=b/2;
  a=a-b/2;

  cout<<(f+e+d-a-b-c)<<endl;
  }

return 0;
}