#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;

using namespace std;

vector<int> sieve_of_eratosthenes(int n) {
  vector<int> primes(n);
  for (int i = 2; i < n; ++i)
    primes[i] = i;
  for (int i = 2; i*i < n; ++i)
    if (primes[i])
      for (int j = i*i; j < n; j+=i)
        primes[j] = 0;
  return primes;
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    int i,j,k;
    long n,m,tmp,sum=0;
    int a[10000];
    string s[200000];
    cin >> n>>m;
    vector<int> nv=sieve_of_eratosthenes(n);
    vector<int> mv=sieve_of_eratosthenes(m);
    auto nit=nv.begin();

    rep(i,n){
       // if(nv[i]!=0&&mv[i]!=0) {
            printf("%d\n",nv[i]);
       // }
    }

    cout<< sum << endl;

    return 0;
}