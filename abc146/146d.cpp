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
    ll to,id;
};
vector<vector<Edge>> g;
vector<int> ans;

void dfs(int v,int c=-1,int p=-1){
    int k=1;
    rep(i,g[v].size()){
        int u=g[v][i].to,ei=g[v][i].id;
        if(u==p) continue;
        if(k==c) ++k;
        ans[ei]=k;++k;
        dfs(u,ans[ei],v);
    }
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    ll i,j,k,p=1,q=1;
    ll n,m,tmp;
    string s[200000];
    string str;
    ll sum=0;
    ll strr[200005];
    cin>>n;
    ll a,b;
    g.resize(n);
    ans=vector<int>(n-1);
    rep(i,n-1){
           cin >> a>>b;
           --a;
           --b;
           g[a].push_back((Edge){b,i});
           g[b].push_back((Edge){a,i});
    }
    dfs(0);
    int mx=0;
    rep(i,n) mx=max(mx,int(g[i].size()));
    cout<<mx<<endl;
    rep(i,n-1){
        cout<<ans[i]<<endl;
    }
    //rep(i,n) cout<<d[i]<<" "<<endl;


    return 0;
}