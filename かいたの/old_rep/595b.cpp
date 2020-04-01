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
       
    int i,j,k,p=1,q=1;
    long n,m,tmp;
    string s[200000];
    string str;
    ll sum=0;
    int strr[200005];
    cin>>m;
    rep(j,m){
        cin>>n;
        ll f=0;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        vector<int> d(n);
        vector<int> e(n);
        vector<int> g(n);
        rep(i,n) g[i]=0;
        for(i=0;i<n;i++)   {
            cin >> a[i];
            a[i]=a[i]-1;
            c[i]=a[i];
            d[i]=a[i];
        }
        int h=0;
        for(k=0;k<n;k++){
            if(a[k]!=k){
                h=1;
            }
        }
        if(h==0){
            rep(i,n) cout<<1<<" ";
            cout<<endl;
            continue;
        }
        for(i=1;i<n+1;i++){
            rep(o,n) e[o]=a[o];
            for(int l=0;l<n;l++){
                a[l]=e[c[l]];
            }
            for(k=0;k<n;k++){
                if(a[k]==d[k]&&g[k]==0){
                    b[k]=i;
                    g[k]=1;
                    f++;
                }
            }
            if(f>=n) break;
        }
        rep(l,n) cout<<b[l]<<" ";
        cout<<endl;
    }
    return 0;
}