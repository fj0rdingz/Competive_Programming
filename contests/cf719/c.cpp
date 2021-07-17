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
        vector<vector<ll>> v(n,vector<ll> (n));
        if(n==2){
            cout<<-1<<endl;
        }else if(n==1){
            cout<<1<<endl;
        }else if(n==3){
            cout<<"2 9 7"<<endl;
            cout<<"4 6 3"<<endl;
            cout<<"1 8 5"<<endl;
        }else if(n%2){
            ll num=1;
            rep(i,n){
                rep(j,n){
                    if(j%2){
                        v[i][j]=num;
                        num++;
                    }
                }
            }
            rep(i,n){
                rep(j,n){
                    if(j%2==0){
                        v[i][j]=num;
                        num++;
                    }
                }
            }
            rep(i,n){
                rep(j,n){
                    cout<<v[i][j]<<" ";
                }
                ln;
            }
        }else{
            ll num=1;
            rep(i,n){
                rep(j,n){
                    if(j%2){
                        v[i][j]=num;
                        num++;
                    }
                }
            }
            rep(i,n){
                rep(j,n){
                    if(j%2==0){
                        v[i][j]=num;
                        num++;
                    }
                }
            }
            rep(i,n){
                rep(j,n){
                    cout<<v[i][j]<<" ";
                }
                ln;
            }
        }
    }


    return 0;
}
