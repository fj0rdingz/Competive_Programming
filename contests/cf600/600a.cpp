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
        int sum=0;
        vector<int> v(m);
        vector<int> w(m);
        rep(k,m) cin>>v[k];
        rep(k,m) cin>>w[k];
        int num;
        int f=0;
        rep(j,m){
            if(f==1){
                if(v[j]+num!=w[j]){
                    f=2;
                }
            }
            if(f==2){
                if(v[j]!=w[j]){
                sum=3;
                break;
                }
            }
            if(v[j]<w[j]&&f==0){
                num=w[j]-v[j];
                f=1;
            }
            else if(w[j]<v[j]){
                sum=3;
                break;
            }
        }
        if(sum>=3){
            cout<<"NO"<<endl;

        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;

}