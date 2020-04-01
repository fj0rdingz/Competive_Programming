#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
#include<cmath>
typedef long long int ll;

using namespace std;

int binary_search(int a[],int key,int size) {
    int left = 0, right = size; // 配列 a の左端と右端
    while (right >= left) {
        int mid = left + (right - left) / 2; // 区間の真ん中
        if (a[mid] == key) return mid;
        else if (a[mid] > key) right = mid - 1;
        else if (a[mid] < key) left = mid + 1;
    }
    return -1;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int i,j,k;
    long n,m,tmp;
    int c[1000];
    int d[1000];
    int e[1000];
    ll count=0;
    int max=0;
    int maxnum=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin>>c[i];
        d[i]=c[i];
        e[i]=0;
    }
    sort(c,c+n);

    for(i=n-1,j=0;i>=0;i--,j++){
        count=count+c[i]*j+1;
    }

    cout << count<< endl;
    sort(c,c+n,std::greater<int>());


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(c[i]==d[j]&&e[j]==0){
                printf("%d ",j+1);
                e[j]=1;
                break;
            }
        }
    }
    return 0;
}