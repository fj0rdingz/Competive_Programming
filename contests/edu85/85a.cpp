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
    ll sum=0;
    ll strr[200005];
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        //ll play,lv;
        ll f=0;
        vector<int> play(a[i]);
        vector<int> lv(a[i]);

        rep(j,a[i]){
            cin>>play[j]>>lv[j];
        }
        rep(j,a[i]){
            if(play[j]<lv[j]){
                f=1;
                break;
            }
            if(j!=0){
                if(play[j-1]>play[j]||lv[j-1]>lv[j]){
                    f=1;
                    break;
                }
                if(play[j]-play[j-1]<lv[j]-lv[j-1]){
                    f=1;
                    break;
                }
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }


    return 0;
}

