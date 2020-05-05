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
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n)   cin >> a[i];
    rep(i,n)   cin >> b[i];
    vector<int> as(m);
    vector<int> bs(m);
    rep(i,n){
        as[a[i]]++;
        bs[b[i]]++;
    }/*
    rep(i,n){
        cout<<as[i]<<" "<<endl;
    }*/
    list<int> alist;
    list<int> blist;
    rep(i,m){
        alist.push_back(as[i]);
        blist.push_back(bs[i]);
    }

    int cnt=0;
    for(j=0;j<m;j++){
        int f=1;
        auto aitr=alist.begin();
        auto bitr=blist.begin();
        rep(i,m){
            if(*aitr!=*bitr) {
                f=0;
                break;
            }
            aitr++;
            bitr++;
        }
        if(f==1){
            cout<<cnt<<endl;
            return 0;
        }
        auto hige=alist.end();
        hige--;
        alist.push_front(*hige);
        alist.pop_back();
        cnt++;

    }

    return 0;
}