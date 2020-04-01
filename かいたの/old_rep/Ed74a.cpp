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
    int a[10000];
    string s[200000];
    string str;
    ll x,y,z;
    int strr[200005];
    int f=0;
    cin >> n;
    rep(i,n){
        cin>>x>>y;
        z=x-y;
        if(z==1) cout<<"No"<<endl;
        else cout<<"YES"<<endl;
        /*
        for(int64_t i = 2; i * i <= z; i++) {
            if(z % i == 0) {
                cout<<"YES"<<endl;
                //cout<<x<<" "<<i;
                f=1;
                break;
            }
        }
        if(z==2||z==3){
            cout<<"YES"<<endl;
            f=1;
        }
        if(f==0){
            cout<<"NO"<<endl;
        }
        f=0;
    }
    */

    //std::cout<< str << endl;
    //outputfile<<str;
   // outputfile.close();
    }
    return 0;
}