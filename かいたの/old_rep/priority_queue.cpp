#include <cstdio>
#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
 

    int a[]={1,2,4,3,5};
    priority_queue<long> q;
    long n,m,tmp;

    cin >> n;
    cin >> m;

   for (n; n>0 ; n--) {
       cin>>tmp;
        q.push(tmp);
    }

    while (m>0) {
        tmp=q.top();
        q.pop();
        tmp=tmp/2;
        q.push(tmp);
        m--;

    }
    tmp=0;
    while(!q.empty()){
        tmp+=q.top();
        
        q.pop();

    }
    cout<<tmp;

    return 0;


}