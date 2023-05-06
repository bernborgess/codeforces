/**
 *    author:  bernborgess
 *    problem: A_Trust_Nobody - 1826
 *    created: 05.May.2023 11:35:47
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
  int n;
  cin >> n;
  vi l(n);
  vi cnt(n + 1);
  for (int& i : l) {
    cin >> i;
    for (int j = i; j <= n; j++) cnt[j]++;
  }
  sort(all(l));

  int ans = -1;
  for (int j = 0; j <= n; j++) {
    if (n - cnt[j] == j) {
      ans = j;
      break;
    }
  }

  cout << ans << endl;
}

int main() {
  _;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
