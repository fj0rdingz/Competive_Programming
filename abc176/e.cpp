// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで
// -fsanitize=undefinedでオーバーフロー検出
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
ll dx[24]={2,2,2,2,2,1,1,1,1,1,0,0,0,0,-1,-1,-1,-1,-1,-2,-2,-2,-2,-2};
ll dy[24]={2,1,0,-1,-2,2,1,0,-1,-2,2,1,-1,-2,2,1,0,-1,-2,2,1,0,-1,-2};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    ll h,w,ch,cw,dh,dw;
    cin>>h>>w>>ch>>cw>>dh>>dw;
    string str[h];
    rep(i,h){
        cin>>str[i];
    }
    ch--;
    cw--;
    dh--;
    dw--;
    ll chk[h][w];
    deque<pair<ll,ll>> q;
    deque<ll> cntq;
    cntq.push_back(0);
    q.push_back(make_pair(ch,cw));

    chk[ch][cw]=1;
    rep(i,h){
        rep(j,w){
            if(str[i][j]=='#') chk[i][j]=1;
            else chk[i][j]=0;
        }
    }
    sum=INF;
     while(q.size()!=0){
        pair<ll,ll> p=q.front();
        ll cnt=cntq.front();
        cntq.pop_front();
        q.pop_front();
        cout<<p.first<<" "<<p.second<<" "<<cnt<<endl;
        if(p.first==dh&&p.second==dw){
            sum=min(sum,cnt);
        }else{
            rep(i,24){
                if(p.first+dy[i]<0||p.second+dx[i]<0||p.first+dy[i]>h-1||p.second+dx[i]>w-1) continue;
                                cout<<p.first+dy[i]<<" "<<p.second+dx[i]<<endl;;

                //cout<<p.first+dy[i]<<" "<<p.second+dx[i]<<endl;
                if(chk[p.first+dy[i]][p.second+dx[i]]==0){
                    q.push_back(make_pair(p.first+dy[i],p.second+dx[i]));
                    cnt++;
                    if(p.first+dy[i]==p.first&&p.second+dx[i]==p.second-1||p.first+dy[i]==p.first&&p.second+dx[i]==p.second+1
                    ||p.first+dy[i]-1==p.first&&p.second+dx[i]==p.second||p.first+dy[i]+1==p.first&&p.second+dx[i]==p.second){
                    chk[p.first+dy[i]][p.second+dx[i]]=1;
                    cnt--;
                    }
                    cntq.push_back(cnt);
                }
            }
        }
        //cout<<"loop";
    }
    if(sum==INF) sum=-1;
    cout<<sum<<endl;

    return 0;
}
