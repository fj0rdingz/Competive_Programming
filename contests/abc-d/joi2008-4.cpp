#include <bits/stdc++.h>
#define ll long long
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
ll a[100][100]={0};
ll maxi=-1;
ll NMAX,MMAX;
void bfs(ll x,ll y,ll cnt,ll v[100][100]){
    if(v[x][y]==0) return;
    v[x][y]=0;
    cnt++;
    maxi=max(cnt,maxi);
    if(0<x&&v[x-1][y]==1) bfs(x-1,y,cnt,v);
    if(0<y&&v[x][y-1]==1) bfs(x,y-1,cnt,v);
    if(v[x+1][y]==1) bfs(x+1,y,cnt,v);
    if(v[x][y+1]==1) bfs(x,y+1,cnt,v);
    return;
}


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll i,j,k,l,m,n,w,x,y,z,p,q,tmp,sum=0;
    string str;
    cin>>m>>n;
    NMAX=n;MMAX=m;
    //vector<int> a(n);
    ll v[100][100]={0};
    rep(i,n)rep(j,m)   cin >> a[i][j];
    rep(i,n)rep(j,m)   v[i][j]=a[i][j];
    rep(i,n)rep(j,m){
        bfs(i,j,0,v);
        rep(k,n)rep(l,m){
        v[k][l]=a[k][l];
        }
    }

    cout<<maxi<<endl;

    return 0;
}