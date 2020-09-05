// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
using namespace std;
char t[100][100];
ll sd[100][100];
ll h,w;
ll l=-1;
queue<ll> xq,yq,cntq;


void dfs(){
    if(l!=-1) {
        while(!xq.empty()){
            xq.pop();
            yq.pop();
            cntq.pop();
        }
        return;
    }

    if(xq.size()==0) return;
    ll x=xq.front();
    ll y=yq.front();
    ll cnt=cntq.front();
    xq.pop();
    yq.pop();
    cntq.pop();
    //cout<<x<<" "<<y<<" "<<cnt<<endl;
    if(t[x][y]=='#') dfs();
    t[x][y]='#';
    cnt++;
    sd[x][y]=cnt;
    if(x==h&&y==w) {l=cnt;        while(!xq.empty()){
            xq.pop();
            yq.pop();
            cntq.pop();
        }return;}
    if(t[x-1][y]=='.'&&sd[x-1][y]==-1) {
        xq.push(x-1);
        yq.push(y);
        cntq.push(cnt);
    }
    if(t[x+1][y]=='.'&&sd[x+1][y]==-1){
        xq.push(x+1);
        yq.push(y);
        cntq.push(cnt);
    }
    if(t[x][y-1]=='.'&&sd[x][y-1]==-1){
        xq.push(x);
        yq.push(y-1);
        cntq.push(cnt);
    }
    if(t[x][y+1]=='.'&&sd[x][y+1]==-1){
        xq.push(x);
        yq.push(y+1);
        cntq.push(cnt);
    }
    if(l==-1)dfs();
    return;
}

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    vector<vector<char>> x(100,vector<char> (100));

    cin>>h>>w;
        rep(i,100)rep(j,100) sd[i][j]=-1;

    for(ll i=0;i<=h+1;i++){
        for(ll j=0;j<=w+1;j++){
            if(i==0||j==0||i==h+1||j==w+1){
                sd[i][j]=114514;
                t[i][j]='#';
            }else{
            cin>>t[i][j];
            }
            x[i][j]=t[i][j];
            if(t[i][j]=='.') {sum++;}
            else sd[i][j]=123456;
        }
    }
    
    sd[0][0]=0;
    if(t[1][1]=='#'||t[h][w]=='#'){
        cout<<-1<<endl;
        return 0;
    }
    xq.push(1);
    yq.push(1);
    cntq.push(0);
    dfs();
    if(l==-1) {
        cout<<-1<<endl;
        return 0;
    }
    cout<<sum-l<<endl;

    return 0;
}
