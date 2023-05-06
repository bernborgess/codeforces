/**
 *    author:  bernborgess
 *    problem: d - 4_05_06
 *    created: 06.May.2023 11:54:29
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
#define low(X) *(X.begin())
void solve() {
  int n, m;
  cin >> n >> m;
  if (n == m) {
    cout << "YES" << endl;
    return;
  }
  set<int> ps;
  set<int> see;
  ps.insert(n);
  bool can = false;
  while (!ps.empty()) {
    int l = low(ps);
    ps.erase(l);
    see.insert(l);
    if (l % 3) continue;
    int k = l / 3;
    if (k == m) {
      can = true;
      break;
    }
    if (2 * k == m) {
      can = true;
      break;
    }
    if (k > m) {
      if (!see.count(k)) {
        ps.insert(k);
      }
    }
    if (2 * k > m) {
      if (!see.count(2 * k)) {
        ps.insert(2 * k);
      }
    }
  }
  cout << (can ? "YES" : "NO") << endl;
}

int main() {
  _;
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
