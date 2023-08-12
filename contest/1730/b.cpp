/**
 *    author:  bernborgess
 *    problem: b - 1730
 *    created: 25.September.2022 11:29:55
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define f first
#define s second
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
typedef pair<ll, ll> pll;
typedef pair<pii, pii> ppii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _ int q;
  cin >> q;
  int n;
  while (q--) {
    cin >> n;
    vector<pii> xt(n);
    map<int, int> m;
    for (auto& [x, t] : xt) {
      cin >> x;
    }
    for (auto& [x, t] : xt) {
      cin >> t;
    }
    if (n == 1) {
      cout << xt[0].f << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      m[xt[i].f] = max(xt[i].s, m[xt[i].f]);
    }
    int i = 0;
    for (auto [x, t] : m) {
      xt[i] = {x, t};
      i++;
    }
    n = i;
    xt.resize(n);
    if (n == 1) {
      cout << xt[0].f << endl;
      continue;
    }

    vector<int> leftm, rightM;
    leftm.pbk(xt[0].f - xt[0].s);
    int lm = leftm[0];
    for (int i = 1; i < n; i++) {
      leftm.pbk(min(lm, xt[i].f - xt[i].s));
    }

    rightM.pbk(xt[n - 1].f + xt[n - 1].s);
    int rM = rightM[0];
    for (int i = n - 2; i >= 0; i--) {
      rightM.pbk(max(rM, xt[i].f + xt[i].f));
    }
    reverse(all(rightM));

    // for (auto [x, t] : xt) {
    //   cout << '(' << x << ',' << t << ')' << ' ';
    // }
    // cout << endl;

    auto check = [&](int i) {
      return rightM[i + 1] + leftm[i];
    };
    int besti = INF;

    double ans = 1e10;
    for (int i = 0; i < n - 1; i++) {
      // check [i,i+1]
      // left[0,i] + right[i+1,n-1]
      int chk = check(i);
      if (chk < ans) {
        ans = chk;
        besti = i;
      }
    }

    if (ans / 2.0 < xt[besti].f)
      ans = 2.0 * xt[besti].f;
    if (xt[besti + 1].f < ans / 2.0)
      ans = 2.0 * xt[besti + 1].f;

    cout << fixed << setprecision(6);
    cout << ans / 2.0 << endl;
  }

  return 0;
}
