#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
  int n;
  cin >> n;
  ll a[n];
  rep(i, n) cin >> a[i];
  sort(a, a + n);

  ll ans = 1;
  bool flag = true;
  rep(i, n) {
    if (a[i] == 0) {
      ans = 0;
      break;
    } else {
      ll tmp;
      tmp = ans * a[i];
      if (tmp / ans != a[i]) {
        flag = false;
        break;
      } else {
        if (tmp > 1000000000000000000) {
          flag = false;
        } else {
          ans = tmp;
        }
      }
    }
  }
  if (flag)
    cout << ans << endl;
  else
    cout << -1 << endl;
  return 0;
}
