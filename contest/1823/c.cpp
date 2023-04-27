/**
 *    author:  bernborgess
 *    problem: c - 1823
 *    created: 27.April.2023 11:19:38
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound  // iterator for first el not less than x
#define upb upper_bound  // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a) * (a)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define debug(x) cout << #x << " = " << x << endl

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const ll MAX = 1e7 + 10;
const int N_PRIMES = 664589;

bool primo[MAX];
umap<int, int> primos;
int counts[N_PRIMES];

void crivo() {
  int pid = 0;
  memset(primo, true, sizeof(primo));
  primo[0] = primo[1] = 0;
  primos[2] = pid++;
  for (ll i = 4; i * i <= MAX; i += 2) primo[i] = 0;
  primos[3] = pid++;
  for (ll i = 9; i * i <= MAX; i += 6) primo[i] = 0;
  for (ll p = 5; p * p <= MAX * MAX; p += 6) {
    if (primo[p]) {
      primos[p] = pid++;
      for (ll i = p * p; i <= MAX; i += p)
        primo[i] = 0;
    }
    if (primo[p + 2]) {
      primos[p + 2] = pid++;
      for (ll i = (p + 2) * (p + 2); i <= MAX; i += (p + 2))
        primo[i] = 0;
    }
  }
}

void solve() {
  memset(counts, 0, sizeof(counts));
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    while (!(x % 2)) {
      counts[primos[2]]++;
      x /= 2;
    }
    while (!(x % 3)) {
      counts[primos[3]]++;
      x /= 3;
    }
    for (ll p = 5; p <= x; p += 6) {
      while (!(x % p)) {
        counts[primos[p]]++;
        x /= p;
      }
      while (!(x % (p + 2))) {
        counts[primos[p + 2]]++;
        x /= p + 2;
      }
    }
  }
  int k = 0;
  int sob = 0;
  for (int i = 0; i < N_PRIMES; i++)
    if (counts[i] > 0) {
      k += counts[i] / 2;
      sob += counts[i] % 2;
    }
  cout << k + (sob / 3) << endl;
}

int32_t main() {
  _;
  crivo();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
