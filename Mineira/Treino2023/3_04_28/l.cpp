#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define endl '\n'
#define umap unordered_map
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
// !LIB

// Inverso Modular
//
// Computa o inverso de a modulo b
// Se b eh primo, basta fazer
// a^(b-2)

ll inv(ll a, ll b) {
  return a > 1 ? b - inv(b % a, a) * b / a : 1;
}

// Exponenciacao rapida
//
// (x^y mod m) em O(log(y))

ll pow(ll x, ll y, ll m) {  // iterativo
  ll ret = 1;
  while (y) {
    if (y & 1) ret = (ret * x) % m;
    y >>= 1;
    x = (x * x) % m;
  }
  return ret;
}

// Logaritmo Discreto
//
// Resolve logaritmo discreto com o algoritmo baby step giant step
// Encontra o menor x tal que a^x = b (mod m)
// Se nao tem, retorna -1
//
// O(sqrt(m) * log(sqrt(m))

int dlog(int b, int a, int m) {
  if (a == 0) return b ? -1 : 1;  // caso nao definido

  a %= m, b %= m;
  int k = 1, shift = 0;
  while (1) {
    int g = gcd(a, m);
    if (g == 1) break;

    if (b == k) return shift;
    if (b % g) return -1;
    b /= g, m /= g, shift++;
    k = (ll)k * a / g % m;
  }

  int sq = sqrt(m) + 1, giant = 1;
  for (int i = 0; i < sq; i++) giant = (ll)giant * a % m;

  vector<pair<int, int>> baby;
  for (int i = 0, cur = b; i <= sq; i++) {
    baby.emplace_back(cur, i);
    cur = (ll)cur * a % m;
  }
  sort(baby.begin(), baby.end());

  for (int j = 1, cur = k; j <= sq; j++) {
    cur = (ll)cur * giant % m;
    auto it = lower_bound(baby.begin(), baby.end(), pair(cur, INF));
    if (it != baby.begin() and (--it)->first == cur)
      return sq * j - it->second + shift;
  }

  return -1;
}
// !LIB
#if 0
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
  base %= p;
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
int log_bsgs(int a, int b, int p) {
  a %= p;
  b %= p;
  int m = ceil(sqrt(p - 1));
  umap<int, int> table;

  for (int j = 0; j < m; j++) {
    int a_j = fexp(a, j, p) % p;
    table[a_j] = j;
  }
  // a^(-m)
  int a_inv_p = inv_p(a, p);
  int a_m = fexp(a_inv_p, m, p) % p;
  int y = b;

  for (int i = 0; i < m; i++) {
    if (table.count(y)) {
      return i * m + table[y];
    } else {
      y = (y * a_m) % p;
    }
  }
  return -1;
}
#endif

void solve() {
  int a, b, s, p, v;
  cin >> a >> b >> s >> p >> v;
  if (s == v) {
    cout << 0 << endl;
    return;
  }
  if (a == 1) {
    // Computa o inverso de b modulo p
    // Se p eh primo, basta fazer
    // b^(p-2)
    int b_inv = pow(b, p - 2, p);
    int n = ((v - s) * b_inv) % p;
    cout << n << endl;
    return;
  }
  if ((s * (a - 1) + b) % p == 0) {
    cout << "IMPOSSIBLE" << endl;
    return;
  }
  int sab_i = inv((s * (a - 1) + b) % p, p) % p;
  // ll sab_i = pow((s * (a - 1) + b) % p, p + 2, p);
  if (sab_i < 0) sab_i += p;
  ll RHS = (((v * (a - 1)) % p + b) * sab_i) % p;
  // ll n = log_bsgs(a, RHS, p);
  ll n = dlog(a, RHS, p);
  if (n == -1) {
    cout << "IMPOSSIBLE" << endl;
    return;
  }
  // a^n == RHS (mod p)
  cout << n << endl;
}

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
