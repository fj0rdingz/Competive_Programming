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
    ll o,r;
    string s[200000];
    string str;
    ll sum=0;
    int strr[200005];
    int f=0;
    cin>>n;
    ll t,x;
    ll u,v,w;
    rep(i,n){
        cin>>o>>p>>q>>r;
        x=o;
        v=0;
        t=p;
        p=p/q;
        o=o+p;
        p=t%q;
        if(q<=r) v=r/q;
        w=r%q;
        //cout<<p<<q<<w;
        if(t>=q) f=1;
        if(v<=o){
            if(w<=p||f==1){
                if(t+x*q>=r){
                cout<<"YES"<<endl;
                }else{
                cout<<"NO"<<endl;

                }
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
        f=0;
    }
    return 0;
}