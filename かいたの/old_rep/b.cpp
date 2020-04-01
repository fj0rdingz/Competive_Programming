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
    int h,w;
    int d;
    ll sum=1;
    ll count=0;
    int hh[102];
    int wh[102];
    int ah[102][102];
    int a[10000];
    string s[200000];
    string str;
    int f=0;
    int strr[200005];
    cin >> h>>w;
    rep(i,h) cin>>hh[i];
    rep(i,w) cin>>wh[i];
    rep(i,101) rep(j,101) ah[i][j]=-1;
    rep(i,h) hh[i]++;
    rep(i,w) wh[i]++;
    //rep(i,h) rep(j,w) ah[i][j]=0; 
    for(i=0;i<h;i++){
        for(d=0;d<hh[i];d++){
            if(d==(hh[i]-1)) ah[i][d]=0;
            ah[i][d]=1;
        }
    }
    
    for(i=0;i<w;i++){
        for(d=0;d<wh[i];d++){
            if(d==(wh[i]-1)){
                if(ah[d][i]==1){
                    f=1;
                }
                else{
                    ah[d][i]=1;
                }
            }else{
                if(ah[d][i]==0) {
                    f=1;
                }else{
                    ah[d][i]=1;
                }
            }
        }
    }
    for(i=0;i<h;i++){
        for(d=0;d<hh[i];d++){
            //if(d==hh[i]) ah[i][d]=1;
            ah[i][d]=1;
        }
    }

    rep(i,h) rep(j,w) {
        if(ah[i][j]==0) count++;
    }
    if(f==1)count=0;
    for(int i=0;i<count;i++){
        sum=sum*2;
        sum=sum%1000000007;
    }

    if(count==0){
        cout<<0<<endl;
        return 0;
    }

    rep(i,h){rep(j,w){printf("%d ",ah[i][j]);}printf("\n");};
    //sum=sum%1000000007;

    printf("%lld\n",sum);
    //std::cout<< str << endl;
    //outputfile<<str;
   // outputfile.close();

    return 0;
}