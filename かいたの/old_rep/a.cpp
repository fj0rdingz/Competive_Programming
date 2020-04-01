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
       
    int i,j,k,p=1,q=1,f=0;
    int  n,m,tmp;
    int a[10000];
    string s[200000];
    string str;
    int strr[200005];
    int nd=1;
    string ns,ks;
    int temp;
    double num;
    int per=0;
    cin >> n>>k;
    //num=(double)n;
    ns=to_string(n);
    ks=to_string(k);

    //rep(i,ns.length()) cout<<ns[i];
    for(i=n;i<=k;i++){
        ns=to_string(i);
        for(int j=0;j<ns.length();j++){
            for(int k=j+1;k<=ns.length();k++){
                if(ns[j]==ns[k]){
                    f=1;
                    break;
                }
            }
            if(f==1){
                break;
            }
        }
        if(f==0){
        cout<<i<<endl;
        return 0;
        } 
        f=0;
    }
    cout<<"-1"<<endl;
    return 0;
}