/**
 *    author:  bernborgess
 *    problem: c_up - 1779
 *    created: 03.January.2023 18:42:15
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

int solve(vector<int>& v) {
  ll sum = 0;
  multiset<int> ms;
  int ans = 0;
  for (int x : v) {
    sum += x;
    ms.insert(x);
    while (sum < 0) {
      sum -= 2 * (*ms.begin());
      ans++;
      ms.erase(ms.begin());
    }
  }
  return ans;
}

int main() {
  _ int t;
  cin >> t;
  int n, m;
  while (t--) {
    cin >> n >> m;
    m--;
    vector<int> a, b;
    for (int i = m; i < n; i++) {
      int el;
      cin >> el;
      a.pbk(el);
    }
    for (int i = m - 1; i > 0; i--) {
      int el;
      cin >> el;
      b.pbk(-el);
    }
    cout << solve(a) + solve(b) << endl;
  }
  return 0;
}
