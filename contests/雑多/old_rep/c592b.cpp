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
    long n,m,tmp,l;
    int a[1008];
    int min=10000;
    int max=-1;
    string s[200000];
    string str;
    int strr[200005];
    cin >> n;
    rep(i,n){
        cin>>l;
        cin>>str;
        rep(i,l){
            if(str[i]=='1'){
                if(min>i) min=i;
                if(max<i) max=i;
            }
        }
        if(min==10000){
            cout<<l<<endl;
        }else{
            max=l-max-1;
            //min++;
            if(min<max)max=min;
            max=(l-max)*2;
            cout<<max<<endl;
            min=10000;
            max=-1;
        }
    }
    //cout<<min<<" "<<max;
    //rep(i,l) cout<<a[i]<<" ";
    //std::cout<< str << endl;
    //outputfile<<str;
   // outputfile.close();

    return 0;
}