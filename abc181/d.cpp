// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで str[0]=toupper(str[0]);
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define endl '\n'
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
//using namespace atcoder;
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>str;
    if(str.length()<3){
        if(str.length()==1){
            if(str[0]=='8')Yes;
            else No;
        }else{
            if(str[0]=='1'&&str[1]=='6') Yes;
            else if(str[0]=='6'&&str[1]=='1') Yes;
            else if(str[0]=='2'&&str[1]=='4') Yes;
            else if(str[0]=='4'&&str[1]=='2') Yes;
            else if(str[0]=='3'&&str[1]=='2') Yes;
            else if(str[0]=='2'&&str[1]=='3') Yes;
            else if(str[0]=='4'&&str[1]=='8') Yes;
            else if(str[0]=='8'&&str[1]=='4') Yes;
            else if(str[0]=='5'&&str[1]=='6') Yes;
            else if(str[0]=='6'&&str[1]=='5') Yes;
            else if(str[0]=='6'&&str[1]=='4') Yes;
            else if(str[0]=='4'&&str[1]=='6') Yes;
            else if(str[0]=='7'&&str[1]=='2') Yes;
            else if(str[0]=='2'&&str[1]=='7') Yes;
            else if(str[0]=='8'&&str[1]=='8') Yes;
            else if(str[0]=='6'&&str[1]=='9') Yes;
            else if(str[0]=='9'&&str[1]=='6') Yes;
            else No;
        }
    }else{

        
        map<char,ll> mp;
        rep(i,str.length()) mp[str[i]]++;
        a=96;
        vector<ll> v(150);
        char ans[250][3];
        rep(i,150){
            a+=8;
            if(a>1000){
                v[i]=a;
                break;
            }
            if(a>=100) v[i]=a;
        }
        rep(i,v.size()){
            if(v[i]>1000) break;
            rep(j,3){
                a=v[i]%10;
                if(a==0) ans[i][j]='0';
                if(a==1) ans[i][j]='1';
                if(a==2) ans[i][j]='2';
                if(a==3) ans[i][j]='3';
                if(a==4) ans[i][j]='4';
                if(a==5) ans[i][j]='5';
                if(a==6) ans[i][j]='6';
                if(a==7) ans[i][j]='7';
                if(a==8) ans[i][j]='8';
                if(a==9) ans[i][j]='9';
                v[i]/=10;
                if(v[i]==0) break;
            }
        }
       // cout<<ans[0][0]<<endl;

        ll okf=0;
        rep(i,v.size()){
            f=1;
            rep(j,3){
                mp[ans[i][j]]--;
            } 
            rep(j,3){
                //cout<<ans[i][j]<<" "<<mp[ans[i][j]]<<"   ";
                if(mp[ans[i][j]]<0) f=0;
            }//ln;
            if(f==1) okf=1;
            rep(j,3){
                mp[ans[i][j]]++;
            }
        }
        if(okf==1) Yes;
        else No;
    }
    
    return 0;
}
