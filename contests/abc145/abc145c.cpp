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
    ll strr[200005];
    double a[9];
    double b[9];
    double sum=0;
    cin>>n;
    rep(i,n){
        cin>>a[i];
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=sum+sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
            //cout<<sum<<endl;
        }
    }
    ll kai=0;
    for(i=1;i<n;i++){
        kai=kai+i;
    }
    //cout<<kai;
    sum=sum*(n-1)/kai;

    printf("%f\n",sum);

    return 0;
}