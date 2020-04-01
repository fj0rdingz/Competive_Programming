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
    //string s[200000];
    string str;
    char s[50000],c[50000];
    ll sum=0;
    ll strr[200005];
    cin>>n;
    rep(i,n){
        int minad=10000;

        cin>>s>>c;
        ll f=0,flag=0;;
        if(strcmp(s,c)==0) f=1;
        if(strcmp(s,c)==-1){
            cout<<s<<endl;
            continue;
        }
        ll trace=0;
        for(k=0;k<s[k]!='\0';k++){
            char min='Z';
            for(j=trace;s[j]!='\0';j++){
                if(s[j]-min<0){
                    min=s[j];
                    minad=j;
                }
            }
            if(minad==trace) {
                trace++;
            }else if(minad!=trace){
                
                break;
            }
        }
        //cout<<minad<<s[minad]<<s[trace];
        if(s[trace]!='\0'){
        char tmp=s[minad];
        s[minad]=s[trace];
        s[trace]=tmp;
        }
        if(strcmp(s,c)<0&&f==0){
        cout<<s<<endl;
        }else{
            cout<<"---"<<endl;
        }
        //cout<<c;
    }

    return 0;
}