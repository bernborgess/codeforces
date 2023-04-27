/**
 *    author:  bernborgess
 *    problem: a - 1823
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int pairs(int n) {
  return n * (n - 1) / 2;
}

void solve() {
  int n, k;
  cin >> n >> k;
  int m_s = -1;
  for (int m = 0; m <= n; m++) {
    int p = n - m;
    if (pairs(m) + pairs(p) == k) {
      m_s = m;
      break;
    }
  }
  if (m_s == -1) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
  for (int i = 0; i < m_s; i++) {
    cout << 1 << ' ';
  }
  for (int i = m_s; i < n; i++) {
    cout << (-1) << ' ';
  }
  cout << endl;
}

int main() {
  _;
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
