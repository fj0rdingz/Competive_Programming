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
typedef pair<ll,ll> P;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0,loop;
    ll k;
    string str;
    cin>>loop;
    rep(_,loop){
        cin>>n>>k;
        cin>>str;
        f=0;
        for(ll i=0;i<n-k;i++){
            if(str[i]=='0'&&str[i+k]=='?') str[i+k]='0';
            if(str[i]=='1'&&str[i+k]=='?') str[i+k]='1';
            if(str[i]=='0'&&str[i+k]=='1'||str[i]=='1'&&str[i+k]=='0') f=1;
        }
        reverse(all(str));
        for(ll i=0;i<n-k;i++){
            if(str[i]=='0'&&str[i+k]=='?') str[i+k]='0';
            if(str[i]=='1'&&str[i+k]=='?') str[i+k]='1';
            if(str[i]=='0'&&str[i+k]=='1'||str[i]=='1'&&str[i+k]=='0') f=1;
        }
        reverse(all(str));
        ll zeros=0;
        ll ones=0;
        for(ll i=0;i<n;i++){
            if(i==0){
                for(ll j=0;j<k;j++){
                    if(str[j]=='0') zeros++;
                    if(str[j]=='1') ones++;

                }
                for(ll j=0;j<k;j++){
                    if(str[j]=='?'){
                        if(zeros>ones){
                            str[j]='1';
                            ones++;
                        }else{
                            str[j]='0';
                            zeros++;
                        }
                    }
                }
                i=k-1;
            }else{
                if(str[i-k]=='0')zeros--;
                else ones--;
                if(str[i]!=str[i-k]){
                    if(str[i]=='?'){
                        str[i]=str[i-k];
                        if(str[i]=='0')zeros++;
                        else ones++;
                    }else{
                        f=1;
                    }
                }else{
                    if(str[i]=='0') zeros++;
                    else ones++;
                }
            }
            if(zeros>k/2||ones>k/2) f=1;
            //cout<<str<<endl;
        }
        if(f)NO;
        else YES;
    }


    return 0;
}
