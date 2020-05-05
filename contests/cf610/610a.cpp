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
    ll sum=0;
    ll strr[200005];
    cin>>n;
    rep(i,n){
        cin>>x>>y>>z>>p;
        if(y<x){
            y=x;
        }
        ll size=y-x;
        ll pl=z-p;
        ll pr=z+p;
        if(pr<x||y<pl){
            cout<<size<<endl;
        }else if(pl<=x&&y<=pr){
            cout<<0<<endl;
        }else if(pl<x){
            ll r;
            if(y<pr){
                r=pr;
            }else{
                r=y;
            }
            ll all=(r-pl)*2;
            all=all-(pr-pl)-(y-x);
            cout<<all<<endl;
        }else{
                        ll r;
            if(y<pr){
                r=pr;
            }else{
                r=y;
            }
            ll all=(r-x)*2;
            all=all-(pr-pl)-(y-x);
            cout<<all<<endl;
        }


    }

    return 0;
}