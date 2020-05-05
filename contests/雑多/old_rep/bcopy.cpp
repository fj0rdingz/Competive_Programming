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
int binary_search(int key,vector<int> q) {
    int left = 0, right = (int)q.size() - 1; // 配列 a の左端と右端
    while (right >= left) {
        int mid = left + (right - left) / 2; // 区間の真ん中
        if (q[mid] == key) return mid;
        else if (q[mid] > key) right = mid - 1;
        else if (q[mid] < key) left = mid + 1;
    }
    return -1;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
       
    int i,j,k,p=1;
    int f=0;
    int be=0;
    int datas=0;
    long n,m,tmp;
    int a[100000];
    string s[200000];
    string str;
    int strr[200005];
    cin >> n>>k;
    rep(i,n) cin>>a[i];
    
    std::list<int> qnum;
    std::vector<int> q;
    rep(i,n){
        if(be==0){
            qnum.push_front(i);
            //qnum.pop_back();
            datas++;
            q.push_back(a[i]);
    //        cout<<*q.begin();
            be=1;
        }else if(datas<k){
            sort(q.begin(),q.end());
            f=binary_search(a[i],q);
            if(f==-1){
                qnum.push_front(i);
                //qnum.pop_back();
                datas++;
                q.push_back(a[i]);
            }
            //qnum.push_front(a[i]);
            
        }else{
            sort(q.begin(),q.end());
            f=binary_search(a[i],q);
            if(f==-1){
                auto itr=q.begin();
                qnum.push_front(i);
                rep(i,f) itr++;
                q.erase(itr);
                qnum.pop_back();
                q.push_back(a[i]);
            }
        }
                //cout<<*q.begin();
    /*
    for(auto itr = qnum.begin(); itr != qnum.end(); ++itr){
        cout<<a[*itr];
        cout<<' ';
    }
    ln;
*/


        f=0;
    }
    cout<<qnum.size()<<endl;
    for(auto itr = qnum.begin(); itr != qnum.end(); ++itr){
        cout<<a[*itr];
        cout<<' ';
    }
    ln;
    //outputfile<<str;
   // outputfile.close();

    return 0;
}