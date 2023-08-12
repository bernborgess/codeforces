/**
 *    author:  bernborgess
 *    problem: e - selet
 *    created: 12.August.2023 14:12:48
 **/
#include <bits/stdc++.h>

using namespace std;

#define _ cin.tie(0)->sync_with_stdio(0)
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
#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)
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

int main() {
  _;
  int n;
  cin >> n;
  vi a(n);
  for (int& i : a) cin >> i;
  sort(all(a));
  bool ok = true;
  int cnt = 1;
  int el = a[0];
  int cel = (n + 1) / 2;
  for (int i = 1; ok && i < n; i++) {
    if (a[i] == el) {
      cnt++;
      if (cnt > cel)
        ok = false;
      continue;
    }
    cnt = 1;
    el = a[i];
  }
  cout << (ok ? "YES" : "NO") << endl;

  return 0;
}
