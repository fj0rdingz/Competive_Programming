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
    string s[200000];
    string str;
    ll sum=0;
    ll strr[200005];
    cin>>n;
    rep(i,n){
        cin>>m;
        vector<int> a(m);
        vector<int> b(m); 
        rep(j,m) cin>>a[j];
        if(m==1){
            cout<<"-1"<<endl;
        }else{
            int f=0,zerof=0;
            ll min=100000000;

            vector<int> cnt(n);
            rep(j,m){
                cnt[a[j]]++;
            }
            ll max=0;
            int maxadd=1234;
            rep(j,m){
                if(max<cnt[a[j]]) {
                    max=cnt[a[j]];
                    maxadd=a[j];
                }
            }
            int owaf=0;
            rep(j,m){
                if(max==cnt[a[j]]&&maxadd!=a[j]){
                    owaf=1;
                }
            }
            
            
            j=0;
            rep(j,m){
                b[m]=0;
            }
            rep(j,m){
                if(a[j]==maxadd){
                    if(b[a[j]]==0&&zerof!=a[j]){
                        b[a[j]]=j;
                        if(j==0) zerof=a[j];
                    }else{
                        if(min>j-b[a[j]]||min>j-b[zerof]) min=j-b[a[j]];
                        b[a[j]]=j;
                        f=1;
                }
                }
                //cout<<a[j]<<" ";
            }
            min++;

            if(owaf==0){
            cout<<min<<endl;
            }else{
            cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}