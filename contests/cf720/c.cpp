// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// g++ hoge.cpp -std=c++17 -I . でコンパイルできる
// -fsanitize=undefinedでオーバーフロー検出
#include <bits/stdc++.h>
//#include <atcoder/all>
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
//using namespace atcoder;
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n;
        vector<ll> ans(n);
        vector<ll> tempmindex(0);
        ll mindex=-1;
        REP(i,1,n+1){
            if(i!=n) {
                cout<<"? 1 "<<i<<" "<<i+1<<" 1"<<endl;
            }else{
                //i==n
                i--;
                cout<<"? 1 "<<i<<" "<<i+1<<" 1"<<endl;
            }
            cout.flush();
            cin>>a;
            if(a==1){
                mindex=i-1; //プログラム的には一個前のindex,帰ってきているのは左側の値なのでi-1でよさそう
            }else if(a==2){
                tempmindex.push_back(i+1); //プログラム的には一個前のindexだが次回サーバー側に投げるので1プラスしたまま
            }
            i++;
        }
        if(mindex==-1&&tempmindex.size()==1){
            mindex = tempmindex[0]-1; //右側の値が入っているので-1する
        }else if(tempmindex.size()==2&&mindex==-1){
            cout<<"? 1 "<<tempmindex[0]<<" "<<tempmindex[1]<<" 1"<<endl;
            cout.flush();
            cin>>a;
            if(a==-1) return 0;
            if(a==1) mindex = tempmindex[0]-1; //プログラム的には一個前のindex
            else mindex     = tempmindex[1]-1; //プログラム的には一個前のindex
        }
        mindex++;
        ans[mindex] = 1;
        REP(i,1,mindex+1){
            if(mindex==i) continue;
            cout<<"? 1 "<<mindex<<" "<<i<<" "<<1<<endl;
            cout.flush();
            cin>>a;
            if(a==-1)return 0;
            ans[i-1]=a; //+1された値が返ってくる
        }
        REP(i,mindex+2,n+1){
            if(mindex==i) continue;
            cout<<"? 1 "<<mindex<<" "<<i<<" "<<1<<endl;
            cout.flush();
            cin>>a;
            if(a==-1)return 0;
            ans[i-1]=a; //+1された値が返ってくる
        }
        ans[mindex] = 1;
        cout<<"! ";
        rep(i,n){
            cout<<ans[i]<<" ";
        }
        ln;
        
        cout.flush();
    }


    return 0;
}
