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

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0,loop;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n>>str;
        ll i=0;
        f=0;
        ll start=0;
        ll odd=0;
        sum=0;
        odd=str.length()%2;
        rep(i,n-1){
            if(str[i]=='L'&&str[i+1]=='R') {
                start=i+1;
                f=1;
            }
        }
        if(str[n-1]=='L'&&str[0]=='R'){
            start=0;
            f=1;
        }
        if(f==0){
            cout<<n/2<<endl;
            return 0;
        }
        string s1=str.substr(start);
        string s2=str.substr(0,start);
        str=s1+s2;

        while(i+4<=n-1){
            if(str[i]=='L'&&str[i+1]=='R'){
                i++;
            }else if(str[i]=='L'&&str[i+1]=='L'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='L'){
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='R'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='L'&&str[i+3]=='L'&&str[i+4]=='R'){
                i+=4;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='L'){
                                               // cout<<"hioy";

                i+=3;
            }
            //cout<<i<<" "<<str<<" "<<sum<<endl;
        }
        if(i+2<=n-1){
            if(str[i]=='L'&&str[i+1]=='R'){
                i++;
            }else if(str[i]=='L'&&str[i+1]=='L'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='L'){
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='R'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='L'){
                               // cout<<"hio";
                i+=3;
            }
                        //cout<<i<<" "<<str<<" "<<sum<<endl;

        }
        if(i+2<=n-1){
            if(str[i]=='L'&&str[i+1]=='R'){
                i++;
            }else if(str[i]=='L'&&str[i+1]=='L'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='L'){
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='R'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='L'){
                               // cout<<"hio";
                i+=3;
            }
                        //cout<<i<<" "<<str<<" "<<sum<<endl;

        }
        if(i+2<=n-1){
            if(str[i]=='L'&&str[i+1]=='R'){
                i++;
            }else if(str[i]=='L'&&str[i+1]=='L'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='L'){
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='R'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'&&str[i+2]=='L'){
                                //cout<<"hio";
                i+=3;
            }
                        //cout<<i<<" "<<str<<" "<<sum<<endl;

        }
        if(i+1<=n-1){
            if(str[i]=='L'&&str[i+1]=='R'){
                i++;
            }else if(str[i]=='L'&&str[i+1]=='L'){
                sum++;
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='L'){
                i+=2;
            }else if(str[i]=='R'&&str[i+1]=='R'){
                //cout<<"hi";
                sum++;
                }
            //cout<<i<<" "<<str<<" "<<sum<<endl;

        }
        cout<<sum<<endl;
    }


    return 0;
}
