/**
 *    author:  bernborgess
 *    problem: h - 4_05_06
 *    created: 06.May.2023 12:22:04
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define f first
#define s second
#define pb push_back
#define lob lower_bound  // iterator for first el not less than x
#define upb upper_bound  // iterator for first el bigger than x
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define MOD 1000000007
ll n, k;

ll fexp(ll base, ll exp) {
  ll ret = 1LL;
  while (exp) {
    if (exp & 1)
      ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve() {
  cin >> n >> k;
  map<int, int> bt;
  for (int i = 0; i < n; i++) {
    ll guy;
    cin >> guy;
    for (int bit = 0; bit < 2; bit++) {
      if (~k & (1ll << bit))
        if (~guy & (1ll << bit)) {
          cout << guy << " has " << bit << "th bit unset" << endl;
          bt[bit]++;
        }
    }
  }
  for (auto [k, v] : bt)
    cout << k << ',' << v << ' ';
  cout << endl;
  ll ans = 1;
  for (int bit = 0; bit < 64; bit++)
    if (k & (1ll << bit)) {
      ll cb = fexp(2, bt[bit]) - 1;
      ans = (ans * cb) % MOD;
    }
  cout << ans << endl;
}

int main() {
  _;
  int t;
  cin >> t;
  t = 2;
  while (t--)
    solve();
  return 0;
}
