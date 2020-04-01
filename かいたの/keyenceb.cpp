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
struct Edge{
    ll l,r,length;
        bool operator<(const Edge &another) const
    {
        return l < another.l;//年齢を比較
    };
};

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
    vector<Edge> a(n);
    vector<int> length(n);
    rep(i,n)   cin >> a[i].l>>a[i].r;
    rep(i,n){
        a[i].l=a[i].l-a[i].r;
        a[i].r=a[i].l+a[i].r*2;
        if(a[i].l<0) a[i].l=0;
        a[i].length=a[i].r-a[i].l;
    }
    sort(a.begin(),a.end());
    ll cnt=0;
    rep(i,n){
        if(a[i].l==a[i+1].l){
            
        }else{
            
        }
        cnt++;
    }

    return 0;
}