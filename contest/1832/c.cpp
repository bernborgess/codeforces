/**
 *    author:  bernborgess
 *    problem: c - 1832
 *    created: 12.May.2023 11:58:18
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
  vi a;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    if (i && a[a.size() - 1] == k) continue;
    a.pb(k);
  }

  if (a.size() == 1) {
    cout << 1 << endl;
    return;
  }
  if (a.size() == 2) {
    cout << 2 << endl;
    return;
  }

  bool dwn = a[0] > a[1];
  int ans = 2;
  for (int i = 1; i < a.size(); i++) {
    if (a[i - 1] < a[i] && dwn) {
      ans++;
      dwn = false;
    } else if (a[i - 1] > a[i] && !dwn) {
      ans++;
      dwn = true;
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
