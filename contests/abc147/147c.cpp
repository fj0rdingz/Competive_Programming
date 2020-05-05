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

int a[16][16];
int b[16][16];

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    ll i,j,k,x,y,z,p,q;
    ll n,m,tmp;
    ll l;
    string s[200000];
    string str;
    ll sum=1;
    ll strr[200005];
    rep(i,16){
        rep(j,16){
            b[i][j]=-1;
        }
    }
    ll ms[16];
    cin>>n;
    rep(i,n){
        cin>>m;
        ms[i]=m;
        rep(j,m){
            cin>>a[i][j];
            cin>>b[i][j];
        }
    }
    ll max=0;
    //ll f=0;
    rep(i,n){
        set<int> t;
        set<int> f;
        rep(j,ms[i]){
            if(b[i][j]==1){
                t.insert(a[i][j]);
            }else{
                f.insert(a[i][j]);
            }
        }
        ll flag=0;

        ll kari=t.size();
        for(j=16;j>=0;j--){
            auto itr=t.begin();
            while(itr!=t.end()){
                rep(j,ms[*itr]){
                    if(b[*itr][j]==1){
                        if(t.find(a[*itr][j])!=t.end()){
                            t.insert(a[*itr][j]);
                        }
                    }else{
                        if(f.find(a[*itr][j])!=f.end()){
                            f.insert(a[*itr][j]);
                        }
                    }
                }
                itr++;
            }
            
        }
        auto itr=t.begin();
            while(!(itr==t.end())){
                if(f.find(*itr)!=f.end()){
                    flag=-1;
                    break;
                }
                itr++;
            }
            if(flag==0&&max<t.size()) max=t.size();
            flag=0;
    }
    cout<<max<<endl;

    return 0;
}