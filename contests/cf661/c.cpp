// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    cin>>d;
    rep(_,d){
        sum=0;
        maxi=0;
        cin>>n;
        if(n==1){
            cin>>a;
            cout<<0<<endl;
            continue;
        }
        vector<ll> v(n);
        rep(i,n)   cin >> v[i];
        ll minv=INF;
        rep(i,n) minv=min(minv,v[i]);
        for(ll j=minv+1;j<=n*2;j++){
            map<ll,ll> m;
            set<ll> s;
            sum=0;
            rep(i,n) {
                m[v[i]]++;
                s.insert(v[i]);
            }
            
            for(auto itr=s.begin();itr!=s.end();++itr){
                //cout<<*itr<<" ";
                ll tar = j-*itr;
                if(tar==*itr) sum+=m[tar]/2;
                else sum+=min(m[*itr],m[j-*itr]);
                m[*itr]=0;
                m[j-*itr]=0;
            }
            maxi=max(maxi,sum);
            //cout<<"j: "<<j<<" sum:"<<sum<<endl;;
        }
        cout<<maxi<<endl;

    }
    return 0;
}
