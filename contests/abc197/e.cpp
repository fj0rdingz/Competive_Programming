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
typedef tuple<ll,ll,ll> T;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
bool comp1(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}
bool comp2(pair<ll, ll> a, pair<ll , ll> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
         return a.first < b.first; // 昇順
        //return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        // どちらも同じ
        return true;
    }
}
int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,k,x,y,maxi=0,f=0,mini=INF,sum=0,back=0;
    string str;
    cin>>n;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<P> pa(n);
    set<ll> se;
    rep(i,n)  {
        cin>>a>>b;
        se.insert(b);
        pa[i]=P(b,a);
    }
    sort(all(pa),comp1);
    vector<vector<P>>   p(se.size());
    p[0].push_back(pa[0]);
    ll counter=0;
    for(ll i=1;i<pa.size();i++){
        if(pa[i].first!=pa[i-1].first)counter++;
        p[counter].push_back(pa[i]);
    }
    rep(i,se.size()){
        sort(all(p[i]),comp1);
    }
    ll startx=0;
    rep(i,se.size()){
        ll cursum=0;
        rep(j,p[i].size()){
            sum+=abs(startx-p[i][j].second);
            cursum+=abs(startx-p[i][j].second);
            startx=p[i][j].second;
        }
        if(abs(startx-p[i][0].second)==abs(startx-p[i][p[i].size()-1].second)) {
            sum-=cursum;
            reverse(all(p[i]));
            rep(j,p[i].size()){
                sum+=abs(startx-p[i][j].second);
                cursum+=abs(startx-p[i][j].second);
                startx=p[i][j].second;
            }
        }
    }
    sum+=abs(startx); //最終地点から戻る
    back=sum;
    
    rep(i,se.size()){
        sort(all(p[i]),comp2);
    }
    sum=0;
    startx=0;
    rep(i,se.size()){
        if(abs(startx-p[i][0].second)>abs(startx-p[i][p[i].size()-1].second)) reverse(all(p[i]));
        rep(j,p[i].size()){
            sum+=abs(startx-p[i][j].second);
            startx=p[i][j].second;
          //  cout<<i<<" cost:"<<p[i][j].first<<" x:"<<p[i][j].second<<" strtx:"<<startx<<" plusnum:"<<abs(startx-p[i][j].second)<<" sum:"<<sum<<endl;
        }
    }
    sum+=abs(startx); //最終地点から戻る

    cout<<min(sum,back)<<endl;


    return 0;
}
