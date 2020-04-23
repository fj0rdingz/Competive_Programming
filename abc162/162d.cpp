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
    cin>>str;
    ll r=0,g=0,b=0;
    for(i=0;i<n;i++){
        if(str[i]=='R') r++;
        if(str[i]=='G') g++;
        if(str[i]=='B') b++;
    }
    rep(i,n-2){
        for(j=i+2;j<n;j++){
            if((j-i)%2==0){
                if(str[i]=='R'){
                    if(str[j]=='B'&&str[(j+i)/2]=='G') sum--;
                    if(str[j]=='G'&&str[(j+i)/2]=='B') sum--;
                }else  if(str[i]=='B'){
                    if(str[j]=='R'&&str[(j+i)/2]=='G') sum--;
                    if(str[j]=='G'&&str[(j+i)/2]=='R') sum--;
                }else if(str[i]=='G'){
                    if(str[j]=='B'&&str[(j+i)/2]=='R') sum--;
                    if(str[j]=='R'&&str[(j+i)/2]=='B') sum--;
                }
            }
        }
    }
    //cout<<sum<<endl;
    //cout<<r<<g<<b<<endl;
    cout<<r*g*b+sum<<endl;
  return 0;
}