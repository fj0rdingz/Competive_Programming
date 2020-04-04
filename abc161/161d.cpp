#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<fstream>
#include<deque>

#define F first
#define S second
#define R cin>>
#define Z class
#define ll long long
//#define int long long
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
ll num=0;
ll target;
deque<ll> que;
ll endf=0;

void dfs(){
    if(!que.empty()){
    ll temp=que.front();
    que.pop_front();

    if(temp%10!=0){
        num++;
        if(num==target){
            cout<<temp*10+temp%10-1;
            endf=1;
        }
        que.push_back(temp*10+temp%10-1);
    }

    num++;
    if(num==target){
        cout<<temp*10+temp%10;
        endf=1;
    }
    que.push_back(temp*10+temp%10);
    

    if(temp%10!=9){
        num++;
        if(num==target){
            cout<<temp*10+temp%10+1;
            endf=1;
        }
        que.push_back(temp*10+temp%10+1);
    }
    if(endf==1){
        while(!que.empty()) que.pop_front();
    }
        dfs();
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
    //que.resize(1000000);
    target=n;
    que.push_back(1);
    que.push_back(2);
    que.push_back(3);
    que.push_back(4);
    que.push_back(5);
    que.push_back(6);
    que.push_back(7);
    que.push_back(8);
    que.push_back(9);
    num=9;
    if(n<10){
        cout<<n<<endl;
        return 0;
    }
    dfs();
    ln;
    return 0;
}