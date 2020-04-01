#include <iostream>
#include <bits/stdc++.h>
#include <string>
typedef long long int ll;

using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
 
    long n,m,tmp;
    string s;
    char c;
    int count=0;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++){
        if(i%2==0){
            c=s[i];
        }else{
            if(c==s[i]){
                count++;
                if(s[i]=='a'){
                    s[i]='b';
                }else{
                    s[i]='a';
                }
            }
        }
    }
    cout<<count<<endl;
    cout<< s << endl;

    return 0;
}