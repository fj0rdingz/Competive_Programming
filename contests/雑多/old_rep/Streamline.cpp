#include <cstdio>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
 
  
    int a[100001],b[100001];
    bool c[100001];
    priority_queue<long> q;
    long n,m,tmp,min;
    long sum= 0;
    cin >> m;
    cin >> n;

  for (int i; n>i ; i++) {
       cin>>tmp;
        a[i]=tmp;
        c[i]=0;
    }
   sort(a,a+n);

    for(int j=0;j<=m;j++){
        for(int i=1,tmp=100000;i<n;i++){

            if(c[i]) continue;
            if(tmp>a[i]-a[i-1]){
                tmp=a[i]-a[i-1];
                min=i;
            }
        }
        c[min]=1;
    //    cout << a[min] << std::endl;
    }
    for(int i=0;i<n;i++){
   //     cout << c[i] << std::endl;
    }

    int last;
    last=0;
    for(int i=1;i<100001;i++){

        if(c[i]==0){
            sum=sum+abs(a[last]-a[i-1]);
            last=i;
            //cout << sum << std::endl;
        }
    }

    cout<<sum;

    return 0;


}