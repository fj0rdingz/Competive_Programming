#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
 
using namespace std;
 
 
int main() {
    //cin.tie(0);
   	//ios::sync_with_stdio(false);
       
    int i,j,k,tmp,n,f;
    long m;
    int a[100005];
    int f=0;
    std::list<int> num;
    //string s[200000];
 
    std::cin >> n;
    num.resize(n);
    rep(i,n) {
        std::cin>>tmp;
        num.push_back(tmp);
    };
    for(i=0;i<n;i++){
        j=0;
        f=0;
        for(auto itr=num.begin();itr!=num.end();++itr,++j){
            if(*itr==(i+1)){
                printf("%d ",j+1-n);
                
                a[f]=j;
                f++;
            }
            //auto itr=num.begin()+j;
        
        }
        auto itr=num.begin();
        for(int i=0, j=f;i<f;i++){
         //   num.erase();
        }
    }
    //auto itr=num.begin();
    cout<<endl;
    //printf("owa");
    //num.erase(itr);
    //cout<< *s << endl;
 
    return 0;
}