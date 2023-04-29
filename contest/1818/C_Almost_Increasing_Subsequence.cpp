/**
 *    author:  bernborgess
 *    problem: C - 1818
 *    created: 29.April.2023 11:45:39
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

void solve() {
  int n, q;
  cin >> n >> q;
  vi a(n + 1), M(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  for (int i = 1; i + 2 <= n; i++)
    M[i] = M[i - 1] + (a[i] >= a[i + 1] &&
                       a[i + 1] >= a[i + 2]);

  while (q--) {
    int l, r;
    cin >> l >> r;
    int size = r - l + 1;
    if (size <= 2) {
      cout << size << endl;
      continue;
    }
    int bads = M[r - 2] - M[l - 1];
    cout << (size - bads) << endl;
  }
}

int main() {
  _;
  int t = 1;
  while (t--) solve();
  return 0;
}
