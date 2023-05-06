/**
 *    author:  bernborgess
 *    problem: c - 4_05_06
 *    created: 06.May.2023 11:38:50
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
typedef tuple<int, int, int> tii;

void solve() {
  int n;
  cin >> n;
  vector<tii> fis(n), sec(n), bot;
  for (int i = 0; i < n; i++) {
    string p;
    int mmm;
    cin >> mmm;
    cin >> p;
    fis[i] = {p[0] == '0', mmm, i};
    sec[i] = {p[1] == '0', mmm, i};
    if (p[0] == '1' && p[1] == '1') {
      bot.push_back({mmm, 1, i});
    }
  }
  sort(all(bot));
  sort(all(fis));
  sort(all(sec));
  int ans = INF;
  if (bot.size() > 0) {
    ans = min(ans, get<0>(bot[0]));
  }

  auto [fc, fm, fi] = fis[0];
  auto [sc, sm, si] = sec[0];
  if (!fc && !sc)
    ans = min(ans, fm + sm);
  if (ans == INF) ans = -1;
  cout << ans << endl;
}

int main() {
  _;
  int t;
  cin >> t;

  while (t--)
    solve();
  return 0;
}
