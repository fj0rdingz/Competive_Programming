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
       
    int i,j=-1,k,p=-1,q=1;
    long n,m,tmp;int r;
    list<int> a;
    string s[200000];
    string str;
    int strr[200005];
    priority_queue<int> que;
    cin >> q;
    rep(i,q){
        cin>>n>>r;
        rep(i,n){
            cin>>p;
            a.push_back(p);
        }
        cout<<"hello";
        sort(a.begin(),a.end());
        for(auto itr=a.begin();itr!=a.end();++itr){
            cout<<*itr;
            if(j==-1){
                que.push(*itr);
                j=*itr;
            }else{
                if(j==*itr) continue;
                que.push(*itr);
                j=*itr;
            }
        }
        if(n==1){
            que.pop();
            cout<<1<<endl;
            continue;
        }
        rep(i,n){
            p=i;
            k=que.top();
            que.pop();
            while(que.top()==k) que.pop();
            k=que.top();
            if(k<=r*(i+1)) break;
        }
        p++;
        cout<<p<<endl;
        while(!que.empty()) que.pop();
        //cin>> j;
    }

    //std::cout<< str << endl;
    //outputfile<<str;
   // outputfile.close();

    return 0;
}