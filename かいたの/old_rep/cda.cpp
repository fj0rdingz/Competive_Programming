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
    int a[100000];
    int b[100000];
    ll sum=0;
    int strr[200005];
    cin>>n;
    rep(i,n){
        ll aodd=0,aeven=0,bodd=0,beven=0;

        cin>>m;
        rep(j,m) cin>>a[j];
        cin>>tmp;
        rep(j,tmp) cin>>b[j];
        
        rep(j,m){
            if(a[j]%2){
                aodd++;
            }else{
                aeven++;
            }
        }
        rep(j,tmp){
            if(b[j]%2){
                bodd++;
            }else{
                beven++;
            }
        }
        sum=aodd*bodd+aeven*beven;
        cout<<sum<<endl;
    }


    return 0;
}