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
       
    int i,j,k,q=1;
    long n,tmp;
    double m;
    double moji;
    string s[200000];
    ll sum=0;
    int strr[200005];
    cin>>n;

    rep(i,n){
        int wins=0;
        int pw,rw,sw;
        int ar,ap,as;
        int br=0,bp=0,bs=0;
        string str;

        cin>>m;
        moji=m;
        m=m/2;
        m=round(m);
        cin>>ar>>ap>>as;
        cin>>str;
        for(j=0;j<str.length();j++){
            if(str[j]=='R') br++;
            else if(str[j]=='P') bp++;
            else if(str[j]=='S') bs++;
        }
        //cout<<br<<bp<<bs;

        if(br<=ap){
            wins=br;
            pw=br;
        }else{
            wins=ap;
            pw=ap;
        }
        if(bp<=as){
            wins+=bp;
            sw=bp;
        }else{
            wins+=as;
            sw=as;
        }
        if(bs<=ar){
            wins+=bs;
            rw=bs;
        }else{
            wins+=ar;
            rw=ar;
        }
        //cout<<wins;
        if(m>wins){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            int py,ry,sy;
            py=ap-pw;
            ry=ar-rw;
            sy=as-sw;
            rep(l,moji){
                if(str[l]=='R') {
                    if(pw>0){
                        pw--;
                        cout<<"P";
                    }else{
                        if(ry>0){
                            ry--;
                            cout<<"R";
                        }else{
                            sy--;
                            cout<<"S";
                        }
                    }
                }
                else if(str[l]=='P') {
                    if(sw>0){
                        sw--;
                        cout<<"S";
                    }else{
                        if(ry>0){
                            ry--;
                            cout<<"R";
                        }else{
                            py--;
                            cout<<"P";
                        }
                    }
                }
                
                else if(str[l]=='S') {
                    if(rw>0){
                        rw--;
                        cout<<"R";
                    }else{
                        if(sy>0){
                            sy--;
                            cout<<"S";
                        }else{
                            py--;
                            cout<<"P";
                        }
                    }
                }
            }
            cout<<endl;
        }
    }

    return 0;
}