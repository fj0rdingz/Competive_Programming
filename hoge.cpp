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
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};
class mint {
    long long x;
public:
    mint(long long x=0) : x((x%mod+mod)%mod) {}
    mint operator-() const { 
      return mint(-x);
    }
    mint& operator+=(const mint& a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator-=(const mint& a) {
        if ((x += mod-a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator*=(const  mint& a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint& a) const {
        mint res(*this);
        return res+=a;
    }
    mint operator-(const mint& a) const {
        mint res(*this);
        return res-=a;
    }
    mint operator*(const mint& a) const {
        mint res(*this);
        return res*=a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t>>1);
        a *= a;
        if (t&1) a *= *this;
        return a;
    }
    // for prime mod
    mint inv() const {
        return pow(mod-2);
    }
    mint& operator/=(const mint& a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint& a) const {
        mint res(*this);
        return res/=a;
    }

    friend ostream& operator<<(ostream& os, const mint& m){
        os << m.x;
        return os;
    }
};

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF;
   // cin>>n>>a>>b>>c>>d;
    string str;ll k;
    cin>>n>>k;
    vector<ll> v(n);
    rep(i,n) cin>>v[i];
    //vector<ll> ans(n);
    sort(all(v));
    mint sum=1;
    if(k%2) {
        if(v[0]<=0){
            reverse(all(v));
            if(v[v.size()-3]<0&&v[v.size()-2]>0) reverse(all(v));
            rep(i,k){
                sum*=v[i];
            }
            cout<<sum<<endl;
            return 0;
        }else{
            sum=v[n-1];
            v.erase(v.begin()+n-1);
        }
        k--;
    }
    sort(all(v));
    ll head=0;ll tail=v.size()-1;
    while(k>0){
        k-=2;
        if(v[head]*v[head+1]>v[tail]*v[tail-1]){
            sum*=v[head]*v[head+1];
            head+=2;
        }else{
            sum*=v[tail]*v[tail-1];
            tail-=2;
        }
    }
    cout<<sum<<endl;
    return 0;
}
