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
    cin>>n;
    rep(i,n){
        cin>>m;
        vector<int> a(m);
        rep(j,m) cin>>a[j];
        //int mindex=min_element(a.begin(),a.end())-a.begin();
        auto minit=min_element(a.begin(),a.end());
    
        auto minitr=a.begin();
        int f=0;
        int mindex;
        int lmindex=0;
        while(minitr!=a.end()){
            if(f==0){
                mindex=min_element(a.begin(),a.end())-a.begin();
                minitr=min_element(a.begin(),a.end());
                if(mindex==0){
                    ++minitr;
                    f=1;
                    lmindex=0;
                    continue;
                }
                //cout<<mindex<<endl;
            }else{
                mindex=min_element(minitr,a.end())-a.begin();
                minitr=min_element(minitr,a.end());
                if(a[lmindex+1]==*minitr){
                    ++minitr;
                    lmindex++;
                    continue;
                }
                               // cout<<mindex<<endl;

            }
            //minitr++;
            p=a[mindex];
            for(int l=mindex;l!=lmindex;l--){
                a[l]=a[l-1];
            }
            if(f==0){
                a[0]=p;
            }else{
                a[lmindex]=p;
            }
            lmindex=minitr-a.begin();
            ++minitr;
            //lmindex=minitr-a.begin();
            f=1;
            rep(j,m) cout<<a[j]<<" ";
            cout<<endl;
        }
        rep(j,m) cout<<a[j]<<" ";
        cout<<endl;
    }
    return 0;
}