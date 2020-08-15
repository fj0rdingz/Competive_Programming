// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string stra;
    cin>>a;
    rep(_,a){
        sum=0;
        cin>>n;
        cin>>stra;
        char str[stra.length()];
        rep(i,n) str[i]=stra[i]; 
        //vector<vector<ll>> v(tate,vector<ll> (yoko));
        ll last=0;
        //1~9までの数のループ
        maxi=0;
        ll lastnowsum=0;
        ll lastnowsums[10]={0,0,0,0,0,0,0,0,0,0};
        for(ll i=1;i<=n;i++){
            if(i-n<=10){
                //2以上の時の前処理
                ll nowsum=0;
                if(f==1) nowsum=lastnowsums[9];
                else nowsum=lastnowsum;
                f=0;
                nowsum+=str[i-1]-48;
                lastnowsum=nowsum;
                if(i==nowsum) sum++;
                //本処理
                for(ll j=i;j<n;j++){
                    nowsum+=(ll)str[j]-48;
                    nowsum-=(ll)str[j-i]-48;
                    if(nowsum==i) sum++;
                }
            }else{
                ll nowsum[10]={0,0,0,0,0,0,0,0,0,0};
                rep(j,10) nowsum[j]=lastnowsums[j];
                nowsum[0]+=str[i-1]-48;
                for(ll j=1;j<=9;j++) nowsum[j]=str[i+j-1]-48;
                rep(j,10) lastnowsums[j]=nowsum[j];
                //if(i==nowsum) sum++;
                for(ll j=0;j<10;j++) if(i+j==lastnowsums[j]) sum++;
                //本処理
                for(ll k=0;k<10;k++){
                    for(ll j=i;j<n;j++){
                        nowsum[k]+=(ll)str[j]-48;
                        nowsum[k]-=(ll)str[j-i]-48;
                        if(nowsum[k]==i) sum++;
                    }
                }
                i+=9;
                f=1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
