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
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool comp(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    // secondがconflictする場合はfalseを返す
    return a.second < b.second;
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<P> p(n);
    rep(i,n){
        cin>>a>>b;
        a--;b--;
        p[i]=P(a,b);
    }
    sort(all(p),comp);
    priority_queue<ll,vector<ll>,greater<ll>> sub;
    priority_queue<ll,vector<ll>,greater<ll>> cal;
    priority_queue<ll,vector<ll>,greater<ll>> add;
    vector<ll> ans(n+1);
    rep(i,n){
        if(i!=0)cal.push(p[i].first-1);
        cal.push(p[i].first-1+p[i].second);
        cal.push(p[i].first+p[i].second);
        sub.push(p[i].first+p[i].second-1);
        add.push(p[i].first);
    }
    ll cur=0;
    ll last=0;
    ll nexttime = cal.top();

    while(cal.size()>0){
        if(cal.size()>0){
            ll nowtime = cal.top();
            cal.pop();
            while(cal.size()>0&&cal.top()==nowtime) cal.pop();
            ans[cur]+=nowtime-last;
            cout<<cur<<" "<<nowtime<<" "<<last<<" "<<nowtime-last<<endl;;
            last=nowtime;
            if(cal.size()==0) break; 
            else nexttime=cal.top();
        }
        while(add.size()>0&&add.top()<nexttime){
            cur++;
            add.pop();
        }
        while(sub.size()>0&&sub.top()<nexttime){
            cur--;
            sub.pop();
        }
       // cout<<"num "<<cal.top()<<" "<<add.top()<<" "<<sub.top()<<" "<<cur<<endl;
     //   cout<<"sz  "<<cal.size()<<" "<<add.size()<<" "<<sub.size()<<" "<<cur<<endl;
        //if(sum==4) return 0;
      //  sum++;
       // if(sum>10) break;
        
    }
    rep(i,n) cout<<ans[i]<<" ";
    ln;
    return 0;
}
