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
    int t,u;
    int a;
    string s[200000];
    string str;
    ll sum=0;
    int strr[200005];
    cin>>n;
    rep(i,n)   {
        int f=0;
        cin >> t>>u;
        p=t;
        q=u;
        int c[1000];
        int b[1000];
        a = 2;
        j=0;
        while (p >= a /2) {
            // a で割り切れたら、a は素因数
            // そして、割られる数を a で割る
            // a で割り切れなかったら、 a を 1 増加させる
            if (p % a == 0) {
                b[j]=a;
                p /= a;
                j++;
            } else {
                a++;
            }
        }
        b[j]=a;
        a = 2;
        k=0;
        while (q >= a /2) {
            // a で割り切れたら、a は素因数
            // そして、割られる数を a で割る
            // a で割り切れなかったら、 a を 1 増加させる
            if (q % a == 0) {
                c[k]=a;
                q /= a;
                k++;
            } else {
                a++;
            }
        }
        c[k]=a;
        
        rep(r,j){
            rep(s,k){
                if(b[r]==c[s]) f=1;
            }
        }
        /*
        rep(r,j){
            cout << b[r]<<" ";
        }
        cout<<endl;
        rep(s,k){
            cout<<c[s]<<" ";
        }
        cout<<endl;
        cout<<f<<endl;
        */
        if(t==1||u==1){
            cout<<"Finite"<<endl;
        }else if(f==1){
            cout<<"Infinite"<<endl;
        }else{
            cout<<"Finite"<<endl;
        }
    }

    return 0;
}