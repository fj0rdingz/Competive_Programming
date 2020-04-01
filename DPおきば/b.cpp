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
auto sch(vector<int> q,int a){
    
    return q;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    int i,j,k,p=1;
    int f=0;
    int datas=0;
    long n,m,tmp;
    int a[100000];
    string s[200000];
    string str;
    int strr[200005];
    cin >> n>>k;
    rep(i,n) cin>>a[i];
    
    std::list<int> qnum;
    rep(i,n){
        if(datas<k){
            for(auto itr = qnum.begin(); itr != qnum.end(); ++itr){
                if(*itr==a[i]){
                    f=1;
                    break;
                }
            }
            if(f==0){
                qnum.push_front(a[i]);
                //qnum.pop_back();
                datas++;
            }
            //qnum.push_front(a[i]);
            
        }else{
            for(auto itr = qnum.begin(); itr != qnum.end(); ++itr){
                if(*itr==a[i]){
                    f=1;
                    break;
                }
            }
            if(f==0){
                qnum.push_front(a[i]);
                qnum.pop_back();
            
            }
        }


        f=0;
    }
    cout<<qnum.size()<<endl;
    for(auto itr = qnum.begin(); itr != qnum.end(); ++itr){
        cout<<*itr;
        cout<<' ';
    }
    ln;
    //outputfile<<str;
   // outputfile.close();

    return 0;
}