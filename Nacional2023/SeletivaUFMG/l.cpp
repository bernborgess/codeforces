/**
 *    author:  bernborgess
 *    problem: l - selet
 *    created: 12.August.2023 14:09:48
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

struct CMD {
  bool run;
  int x;
};

int main() {
  _;
  int n, m, s, d;
  cin >> n >> m >> s >> d;
  vi a(n);
  for (int& i : a) cin >> i;
  sort(all(a));
  bool can = true;
  int x = 0;
  vector<CMD> cmds;
  for (int i = 0; i < n; i++) {
    // run
    cmds.pb({1, a[i] - x - 1});

    // last guy
    if (i == n - 1) {
      cmds.pb({0, 2});
      cmds.pb({1, m - a[i] - 1});
      continue;
    }

    // find next hole that can charge
    int nxt = -1;
    for (int j = i + 1; j < n && a[j] - a[i] + 2 <= d; j++) {
      if (a[j] - a[j - 1] >= s) {
        nxt = j;
        break;
      }
    }
    if (nxt == -1) {
      can = false;
      break;
    }

    cmds.pb({0, a[nxt] - a[i] + 2});

    i = nxt;
    x = a[nxt] + 1;
  }

  if (!can)
    cout << "IMPOSSIBLE" << endl;
  else {
    for (auto cmd : cmds) {
      if (cmd.run)
        cout << "RUN " << cmd.x << endl;
      else
        cout << "JUMP " << cmd.x << endl;
    }
  }

  return 0;
}
