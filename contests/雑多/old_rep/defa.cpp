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
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,2,5,7,9};
    vector<int> arr3 = {1,3,4,5,8};
    //vector<int> a;
    //auto itr=a.begin();
    vector<int> a;
    auto ans=a.begin();
        int f=0;
    //cout <<"[";
    for(int i=0;i<(int)arr1.size()-1;i++){
        auto itr=find(arr2.begin(),arr2.end(),arr1[i]);
        if(itr!=arr2.end()){
            auto itrr=find(arr3.begin(),arr3.end(),arr1[i]);
            if(itrr!=arr3.end()){
                *ans=arr1[i];
                ans++;
            }
        }
    }

    //std::cout<< "]" << endl;
    //    return a;
    

    
    //outputfile<<str;
   // outputfile.close();

    return 0;
}