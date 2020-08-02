// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define REP(i, m, n) for (ll i = (ll)(m); i < (ll)(n); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

int main()
{
  ll a, b, c, d, m, n, maxi = 0, f = 0, mini = INF, sum = 0;
  //string str;
  ll h, w, k;
  cin >> h >> w;
  //vector<vector<ll>> v(tate,vector<ll> (yoko));
  vector<string> str(h);
  rep(i, h) cin >> str[i];
  for (ll hbit = 0; hbit < (1 << h); ++hbit){
    for (ll wbit = 0; wbit < (1 << w); ++wbit){
      sum = 0;
      for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
          if (hbit & (1 << i) && wbit & (1 << j) || !(hbit & (1 << i)) && !(wbit & (1 << j))){
            if (str[i][j] == '1') sum++;
          }
          else{
            if (str[i][j] == '0') sum++;
          }
          f++;
        }
      }
      maxi = max(maxi, sum);
    }
  }
  cout<<f<<endl;
  cout << maxi << endl;

  return 0;
}
