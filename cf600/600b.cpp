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
       
    ll k,p=1;
    ll n,m,tmp;
    string s[200000];
    string str;
    ll sum=0;
    ll strr[200005];
    int dayss[1000000];
    cin>>n;
    vector<int> a(n);
    queue<int> q;
    rep(i,n) cin>>a[i];
    set<int> set,dset;
    int days=0;
    int f=0;
    int j=0;
    int r=0;
    rep(i,n){

        if(a[i]<0){
            auto itr=set.find(abs(a[i]));
            dset.insert(abs(a[i]));
            if(itr==set.end()){
                cout<<-1<<endl;
                return 0;
            }
            set.erase(itr);
        }else{
            if(set.find(a[i])!=set.end()) f=1;
            set.insert(a[i]);
            if(dset.find(a[i])!=dset.end()) f=1;
        }
        if(set.empty()){
             days++; 
             q.push(i+1-r);
             j++;
             r=i+1;
             dset.clear();
        }
    }
    if(!set.empty()) f=1;
    if(f==1||n%2){
        cout<<-1<<endl;
    }else{
        //q.pop();
        cout<<days<<endl;
        while(!q.empty()){
            cout<<q.front()<<" ";
        q.pop();
        }
        ln;
    }
    return 0;
}