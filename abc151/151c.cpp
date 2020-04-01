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
       
    ll i,j,k,x,y,z,p,q;
    ll n,m,tmp;
    string s[200000];
    string str;
    ll sum=0,ac=0,wa=0;
    ll strr[200005];
    cin>>m>>n;
    if(n==0) {
        cout<<0<<" "<<0<<endl;
        return 0;
    }else{
    vector<int> c(n);
    vector<int> aced(n);
    ll no;
    rep(i,n){
        cin >> no;
        cin>>str;
        if(aced[no]==1) continue;
        if(str[0]=='W'){
            c[no]++;
        }else{
            sum+=c[no];
            aced[no]=1;
            ac++;
        }
    }
    cout<<ac<<" "<<sum<<endl;
    return 0;
    }
}