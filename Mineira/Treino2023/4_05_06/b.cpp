/**
 *    author:  bernborgess
 *    problem: b - 4_05_06
 *    created: 06.May.2023 11:36:37
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
  vi a(n);
  int st = 0, M = 0;
  for (int& i : a) {
    cin >> i;
    if (i == 0) {
      st++;
      if (st > M) M = st;
      continue;
    }
    st = 0;
  }
  cout << M << endl;
}

int main() {
  _;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
