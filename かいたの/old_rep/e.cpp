#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<fstream>
#include <vector>

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
    ll sam=0;
    int e;
    int strr[200005];
    cin>>n>>k;
    //cout<<"hi";
    vector<int> a(n);

    rep(i,n)   {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    priority_queue<int> b;

    rep(i,n)   {
        cin >> e;
        b.push(e);
    }
    //cout<<"hi";
    for(i=0;k!=0;i++){
        if(a[i]<k){
            k=k-a[i];
            a[i]=0;
            //sum++;
        }else{
            e=a[i];
            e=e-k;
            a[i]=e;
            k=0;
        }
       // cout<<a.top()<<endl;
    }
    sort(a.begin(),a.end());

    for(i=0;!b.empty();i++){
        if(sam==0) {
            sam=a[i]+b.top();
        }else if(sam<a[i]*b.top()){
        sam=a[i]*b.top();
        }
        b.pop();

    }
    cout<<sam<<endl;
    return 0;
}