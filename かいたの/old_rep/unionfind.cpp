#include <cstdio>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;
bool q[100000][100000];
void saiki(int a,int b,int n){
    stack<int> st;
    if(q[a][b]){
        while(!st.empty()) {
            q[st.top()][b]=true;
            st.pop();
        }


        cout<< "Yes"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(q[a][i]) {
                st.push(a);
                saiki(i,b,n);
            }
        }
    }
    while(!st.empty()) st.pop();
            cout<< "No"<<endl;

    return;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int i,j,k;
    long n,m,tmp;
    int p,a,b;

    cin >> n >> m ;
    for(i=0;i<n;i++){
        cin >> p >> a >> b ;
        if(p==0){
            q[a][b]=true;
            q[b][a]=true;
        }else{
            saiki(a,b,n);
        }
    }


    return 0;
}
