/**
 *    author:  bernborgess
 *    problem: b - 1832
 *    created: 12.May.2023 11:38:45
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

void solve() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (int& i : a) cin >> i;
  sort(all(a));
  ll ans = -LINF;
  vector<ll> sm(n);
  sm[0] = a[0];
  for (int i = 1; i < n; i++) sm[i] = sm[i - 1] + a[i];
  for (int l = 0; l < n; l += 2) {
    int r = l / 2 + n - 1 - k;
    if (r < 0 || r >= n) continue;
    ll sum = sm[r] - (l ? sm[l - 1] : 0);
    if (sum > ans) {
      // debug(l);
      // debug(r);
      ans = sum;
    }
  }
  cout << ans << endl;
}

int main() {
  // _;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
