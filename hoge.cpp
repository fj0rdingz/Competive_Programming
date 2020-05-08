// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 100000001
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int dp[120][1050];

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    int maxi=0,f=0,sum=0,mini=INF;
    string str,str1,str2;
    int i;
    int n;
    int a,b,d,c;
    int e,weight;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) cin>>x[i]>>y[i];

    vector<int> h={0,1,2,3,4,5,6,7};
    vector<int> w={0,1,2,3,4,5,6,7};
    do{
        do{

        }while(next_permutation(w.begin(),w.end()));
    }while(next_permutation(h.begin(),h.end()));


    return 0;
}
