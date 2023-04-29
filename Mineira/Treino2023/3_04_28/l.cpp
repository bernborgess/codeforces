#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define endl '\n'
#define umap unordered_map
#define debug(x) cout << #x << " = " << x << endl

typedef tuple<int, int, int> t3;

t3 gcd_ex(int a, int b) {
  if (b == 0) return {a, 1, 0};
  auto [g, x, y] = gcd_ex(b, a % b);
  return {g, y, x - y * (a / b)};
}

int inv_p(int x, int p) {
  auto [g, r, y] = gcd_ex(x, p);
  if (r < 0) r += p;
  return r;
}

int fexp(int base, int exp, int p) {
  int ans = 1;
  while (exp > 0) {
    if (exp & 1)
      ans = (ans * base) % p;
    exp /= 2;
    base = (base * base) % p;
  }
  return ans;
}

// a value x satisfying a^x = b (mod p)
int log_baby_giant(int a, int b, int p) {
  int m = ceil(sqrt(p));
  umap<int, int> table;
  for (int j = 0; j < m; j++) {
    int a_j = fexp(a, j, p);
    table[a_j] = j;
  }
  // a^(-m)
  int a_m = fexp(inv_p(a, p), m, p);
  int y = b;
  for (int i = 0; i < m; i++, y *= a_m)
    if (table.count(y))
      return i * m + table[y];
  return -1;
}

void solve() {
  int a, b, s, p, v;
  cin >> a >> b >> s >> p >> v;
  if (s == v) {
    cout << 0 << endl;
    return;
  }
  if (a == 1) {
    int b_inv = inv_p(b, p);
    int n = ((v - s) * b_inv) % p;
    cout << n << endl;
    return;
  }
  if ((s * (a - 1) + b) % p == 0) {
    cout << "IMPOSSIBLE" << endl;
    return;
  }
  int sab_inv = inv_p(s * (a - 1) + b, p);
  debug(sab_inv);
  int RHS = (v * (a - 1) + b) * sab_inv;
  debug(RHS);
  int n = log_baby_giant(a, RHS, p);

  cout << n << endl;
}

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
