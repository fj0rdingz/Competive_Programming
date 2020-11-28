long long powMod(long long x, long long k, long long m) {
  if (k == 0)     return 1;
  if (k % 2 == 0) return powMod(x*x % m, k/2, m);
  else            return x*powMod(x, k-1, m) % m;
}