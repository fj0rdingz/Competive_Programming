#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<fstream>

#define F firstg
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
       
    int i,j,k=0,p=1,q=1;
    long n,m,tmp;
    int count=0;;
    int a[500050];
    string s[200000];
    string str;
    char c;
    ll sum=0;
    int strr[200005];
    cin>>str;
    
    //for(i=0;str[i+1]!='\0';i++){
        if(i==0){
            //c=str[i];
        }else{
            //if(c==str[i]){
                count++;
            //}else{
                //a[k]=count;
                k++;
                //c=str[i];
                count=0;
            //}
        }
    //}
    rep(i,k){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}