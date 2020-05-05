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
       
    ll i,k,p=1,q=1;
    ll n=10000,m,tmp;
    string s[200000];
    string str;
    ll t=3;
    ll sum=0;
    ll  j;
    int strr[200005];
    
    ll  a[100000];
    ll num=0;
    
    for(i=0;i<9;i++){
        for(j=0;j<i;j++){
            ll y=1;
            for(m=j;m>0;m--){
                if(j==0) {
                    a[num]=1;
                    break;
                }else{
                    y=y*3;
                }
            }
            a[num]=y;
            ++num;
            k=num;
            for(ll l=0;l<k;l++){
                ll y=1;
                for(m=j;m>0;m--){
                    y=y*3;
                }
                //a[k+l]=y+a[l];
                num++;
            }
        }
    }
    rep(i,10) cout<<a[i]<<endl;
    return 0;
}