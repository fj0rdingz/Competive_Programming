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
    string s[200000];
    string str;
    ll sum=0;
    int strr[200005];
    cin>>n;
    rep(i,n){
        cin>>m;
        vector<int> a(m);
        rep(j,m)   cin >> a[j];
        sort(a.begin(),a.end(), std::greater<int>());
        ll sum=0;
        rep(j,m) sum+=a[j];
        ll max=1;
        for(k=2;k<=sqrt(sum);k++){
            ll y=0,t=0,l=0;

            while(l<m) {
                if(k<=a[l]){
                y++;
                }
                l++;
            }

            if(k<=y) {
                max=k;
            }else{
                break;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}