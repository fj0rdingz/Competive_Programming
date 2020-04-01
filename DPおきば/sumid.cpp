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
    ll sum=1;
    ll strr[200005];
    cin>>n;
    vector<int> a(n);
    rep(i,n)   cin >> a[i];
    rep(i,100001) strr[i]=0;
    rep(i,n){
        if(a[i]==0){
            if(strr[0]==0){ 
                sum=sum*3;
            }else if(strr[0]==1){
             sum=sum*2;
            }
        }else{
            sum=sum*(strr[a[i]-1]-strr[a[i]]);
        }
        if(strr[a[i]-1]==0&&a[i]!=0) sum=0;
        if(strr[a[i]]==3) sum=0;
        strr[a[i]]++;
        //cout<<sum<<endl;
        if(sum>1000000007) sum=sum%(long long)1000000007;
    }
    cout<<sum<<endl;


    return 0;
}