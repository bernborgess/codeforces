/**
 *    author:  bernborgess
 *    problem: B_Indivisible - 1818
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

bool allFine(vi& v) {
  for (int i = 2; i <= v.size(); i++) {
    for (int j = 0; j <= v.size() - i; j++) {
      int sum = 0;
      for (int k = 0; k < i; k++)
        sum += v[j + k];
      if (!(sum % i)) {
        return false;
      }
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    return;
  }
  if (n % 2) {
    cout << -1 << endl;
    return;
  }

  vi mb;
  for (int i = 0; i < n; i++) {
    if (i % 2) {
      cout << i << ' ';
    } else {
      cout << i + 2 << ' ';
    }
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
