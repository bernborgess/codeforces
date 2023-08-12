/**
 *    author:  bernborgess
 *    problem: c - 1779
 *    created: 03.January.2023 12:10:53
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _ int t;
  cin >> t;
  int n, m;
  while (t--) {
    cin >> n >> m;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    if (n < 2) {
      cout << 0 << endl;
      continue;
    }
    int ans = 0;
    ll acc = a[m - 1];
    if (m > 1) {
      if (acc > 0) {
        // cout << "FIRST PROBLEM!" << endl;
        ans++;
        acc *= -1;
      }
      for (int k = m - 2; k >= 1; k--) {
        if (a[k] + acc > 0) {
          // cout << "Had to swap ";
          // debug(k);
          ans++;
          acc -= a[k];
        } else {
          acc += a[k];
        }
      }
    }
    acc = 0;
    // debug(cs);
    for (int k = m; k < n; k++) {
      if (acc + a[k] < 0) {
        // cout << "Was winning ";
        // debug(k);
        ans++;
        acc -= a[k];
      } else {
        acc += a[k];
      }
    }
    cout << ans << endl;
  }
  return 0;
}
