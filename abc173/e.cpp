// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
const int mod = 1000000007;
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
    ll k;
    ll a,b,c,d,n,maxi=0,f=0,mini=INF;
    mint sum;
    string str;
    cin>>n>>k;
    //vector<vector<ll>> v(tate,vector<ll> (yoko));
    vector<ll> v(n);
    ll ps=0,ms=0;
    rep(i,n)   {
        cin >> v[i];
    }
    vector<ll> p;
    vector<ll> m;
    rep(i,n){
        if(v[i]>=0) p.push_back(v[i]);
        else m.push_back(v[i]);
    }
    sort(p.begin(),p.end(),greater<ll>());
    sort(m.begin(),m.end(),greater<ll>());
    //cout<<m[0]<<endl;
    sum=1;
    if(k%2) {
        if(p.size()>=1){
            sum=p[0];
            p.erase(p.begin()+1);
            k--;
        }else{
            sum=m[0];
            m.erase(m.begin()+1);
            k--;
        }
    }
    //cout<<p[0]<<endl;
    mint ma;
    rep(i,k/2){
       // cout<<p[0]<<" "<<p[1]<<endl;
        if(p.size()<2||m.size()>=2&&p[0]*p[1]<=m[0]*m[1]){
            ma=m[0]*m[1];
            sum=sum*ma;
            m.erase(m.begin(),m.begin()+2);
        }else{
            ma=p[0]*p[1];
            sum=sum*ma;
            p.erase(p.begin(),p.begin()+2);
        }
    }
    cout<<sum<<endl;

    return 0;
}
