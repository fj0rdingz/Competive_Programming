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
    double sum=0;
    ll strr[200005];
    cin>>n;
    if(n%2){
        cout<<0<<endl;
    }else if(n==0){
        cout<<1<<endl;
    }else{
        n=n/10;
        x=1;
        ll f=0;
    for(i=1;n!=0;n=n/10,i++){

        if(n/10!=0){
            f=1;
            if(sum==0){
                sum=10;
            }else{
                sum+=sum*10;
            }
        }else{
            if(f==1) sum--;
            m=n%10;
            sum+=m*i;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
//けたあがり：1桁下の数*10+nかいめ
//100:11,1000:112,10000:1123