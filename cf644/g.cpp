#include<stdio.h>
#include <queue>
#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
 
    long n,m,tmp;
    int h,w,a,b;
    double x,y;
    int i,j;
    int left=0;
    string no="No";
    int f=0;
    int count;
    //int z[1000][1000];
    int p;
    scanf("%d",&p);
    for(int k=0;k<p;k++){

    scanf("%d %d %d %d",&h,&w,&a,&b);


    if(a==0||b==0){
        if(h*a!=w*b){
            printf("NO\n");
            continue;
        }

        if(b==0){
            if(h==1){
                if(w/a<=2){
                    for(i=0,f=1;i<w;i++){
                        if(i<a){
                            printf("1");
                        }else{
                            printf("0");
                        }
                    }
                }
            }
        }
        if(a==0){
            if(w==1){
                if(h/b<=2){
                    for(i=0,f=1;i<h;i++){
                        if(i<b){
                            printf("1\n");
                        }else{
                            printf("0\n");
                        }
                    }

                }
            }
        }
    }
    else{
        if(h*a!=w*b){
            printf("NO\n");
            continue;
        }
        count=0;
        printf("YES\n");
        for(i=0;i<h;i++){
            for(int now=0,j=0;j<w;j++){
                if(left>j){
                    if(w-left<a&&w-left+now<a){
                        printf("1");
                        count++;
                        if(count==w) count=0;

                        now++;
                        continue;
                    }else{
                    printf("0");
                    continue;
                    }
                }
                if(now<a){
                    printf("1");
                    count++;
                    now++;
                    if(count==w) count=0;
                }else{
                    printf("0");
                }
            }
            printf("\n");
            left=count;
        }
    }
    }


    //cout<<n<<endl;

    return 0;
}
