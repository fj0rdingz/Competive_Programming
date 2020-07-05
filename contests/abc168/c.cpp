// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
//#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll c,d,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    //ll h,m;
    long double a,b;
    long double h,m;
    cin>>a>>b>>h>>m;
    long double ax,ay,bx,by;
    if(0<=h&&h<3||6<=h&&h<9){
            h=(60*h+m)/720*2*M_PI;
        ax=a*cos(h);
        ay=a*sin(h);
    }else{
            h=(60*h+m)/720*2*M_PI;
                    ax=a*sin(h);
        ay=a*cos(h);

}
        if(0<=m&&m<15||30<=m&&m<45){
                m=m/60*M_PI*2;

        bx=b*sin(m);
        by=b*cos(m);
    }else{
            m=m/60*M_PI*2;


        bx=b*cos(m);
        by=b*sin(m);
    }
    //cout<<ax<<" "<<ay<<" "<<bx<<" "<<by<<endl;
    //yoko
    printf("%.18lf",(long double)sqrt(abs(ax-bx)*abs(ax-bx)+abs(ay-by)*abs(ay-by)));



    return 0;
}
