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
ll dx1[4]={1,0,-1,0};
ll dy1[4]={0,1,0,-1};
ll dx2[24]={2,2,2,2,2,1,1,1,1,1,0,0,0,0,-1,-1,-1,-1,-1,-2,-2,-2,-2,-2};
ll dy2[24]={2,1,0,-1,-2,2,1,0,-1,-2,2,1,-1,-2,2,1,0,-1,-2,2,1,0,-1,-2};

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
    ll lastchk[h][w];

    deque<pair<ll,ll>> q;
    deque<pair<ll,ll>> newq;

    deque<ll> cntq;
    cntq.push_back(0);
    q.push_back(make_pair(ch,cw));

    rep(i,h){
        rep(j,w){
            if(str[i][j]=='#') chk[i][j]=1;
            else chk[i][j]=0;
        }
    }
        rep(i,h){
        rep(j,w){
            if(str[i][j]=='#') lastchk[i][j]=1;
            else lastchk[i][j]=0;
        }
    } 
    ll last1s=0;

        rep(i,h){
        rep(j,w){
            if(chk[i][j]==1) last1s++; 
        }
    }
newq.push_back(make_pair(ch,cw));
    newq.push_back(make_pair(-100,0));

    sum=0;
    while(q.size()!=0){
        while(q.size()!=0){
            pair<ll,ll> p=q.front();
            q.pop_front();
            chk[p.first][p.second]=1;
            if(p.first==dh&&p.second==dw){
                f=1;
                break;
            }else{
                rep(i,4){
                    if(p.first+dy1[i]<0||p.second+dx1[i]<0||p.first+dy1[i]>h-1||p.second+dx1[i]>w-1) continue;
                    if(chk[p.first+dy1[i]][p.second+dx1[i]]==0){
                        if(chk[p.first+dy1[i]][p.second+dx1[i]]==0){
                            q.push_back(make_pair(p.first+dy1[i],p.second+dx1[i]));
                            newq.push_back(make_pair(p.first+dy1[i],p.second+dx1[i]));
                            chk[p.first+dy1[i]][p.second+dx1[i]]=1;
                        }
                    }
                }
            }
        }

        if(!newq.size()) break;
        if(f) break;
        ll now1s=0;

while(newq.size()){
    pair<ll,ll> pa=newq.front();
    newq.pop_front();
    ll i=pa.first;
    ll j=pa.second;
    if(i==-100) break;
    //cout<<i<<" "<<j<<endl;
                    rep(k,24){
                        if(i+dy2[k]<0||j+dx2[k]<0||i+dy2[k]>h-1||j+dx2[k]>w-1) continue;
                        if(str[i+dy2[k]][j+dx2[k]]!='#') {
                            str[i+dy2[k]][j+dx2[k]]='#';
                            q.push_back(make_pair(i+dy2[k],j+dx2[k]));
                            newq.push_back(make_pair(i+dy2[k],j+dx2[k]));
                            //cout<<i+dy2[k]<<" "<<j+dx2[k]<<endl;
                        }
                    }
    }
    newq.push_back(make_pair(-100,0));


        sum++;
    }

    
    if(f)cout<<sum<<endl;
    else cout<<-1<<endl;

    return 0;
}
