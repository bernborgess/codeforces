/**
 *    author:  bernborgess
 *    problem: c - 1730
 *    created: 25.September.2022 11:30:15
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
  while (t--) {
    string s;
    cin >> s;
    map<int, int> m, c;
    int n = s.size();

    for (int i = 0; i < n; i++) {
      c[s[i] - '0']++;
    }

    for (int stage = 0, l = 0; stage <= 9 && l < n; stage++) {
      int i = n - 1;
      for (; i >= l; i--) {
        // look for rightmost 'stage'
        if (s[i] - '0' == stage) break;
      }
      if (i < l) continue;
      for (int j = l; j < i; j++) {
        if (s[j] > s[i]) {
          m[s[j] - '0']++;
        }
      }
      l = i + 1;
    }

    for (int stage = 0; stage <= 9; stage++) {
      int times = c[stage] - m[stage] + m[stage - 1];
      for (int i = 0; i < times; i++)
        cout << stage;
    }
    for (int i = 0; i < m[9]; i++)
      cout << 9;
    cout << endl;
  }

  return 0;
}
