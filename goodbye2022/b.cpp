/**
 *    author:  bernborgess
 *    problem: b - goodbye2022
 *    created: 30.December.2022 13:01:33
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
  int n, k;
  while (t--) {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
      // 6 1 5 2 4 3
      // 5 1 4 2 3
      if (i % 2 == 0) {
        // cara grande!
        // 0 2   4
        // n n-1 n-2
        cout << (n - (i / 2)) << ' ';

      } else {
        // cara pequeno :(
        // 1   2   3  4
        // 1   3   5  7
        cout << (i + 1) / 2 << ' ';
      }
    cout << endl;
  }
  return 0;
}
