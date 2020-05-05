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

bool is_prime(int64_t x) {
  for(int64_t i = 2; i * i <= x; i++) {
    if(x % i == 0) return false;
  }
  return true;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    ll i,j,k,x,y,z,p,q;
    ll n,m,tmp;
    string s[200000];
    string str;
    ll sum=0;
    ll strr[200005];
    cin>>n;
    for(i=4;i<10e9-n;i++){
        if(!is_prime(i)){
            if(!is_prime(i+n)){
                cout<<i+n<<" "<<i<<endl;
                return 0;
            }
        }
    }

    return 0;
}