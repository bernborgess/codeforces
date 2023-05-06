/**
 *    author:  bernborgess
 *    problem: g - 4_05_06
 *    created: 06.May.2023 12:33:30
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

const int MAX = 2024;
ll pir[MAX][MAX];
ll sc[MAX][MAX];

void build() {
  memset(pir, 0, sizeof(pir));
  ll k = 1;
  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j <= i; j++) {
      pir[i][j] = (k * k);
      k++;
    }
  }
  memset(sc, 0, sizeof(pir));
  for (int j = 0; j < MAX; j++) {
    sc[j][j] = pir[j][j];
    for (int i = j + 1; i < MAX; i++) {
      sc[j][i] = sc[j][i - 1] + pir[i][j];
    }
  }
}

pii locate(int n) {
  int rt = ceil(sqrt(1 + 8 * n));
  int row = (rt - 1) / 2;
  int up = row * (row + 1) / 2;
  pii ans = {row, row - (up - n)};
  debug(n);
  cout << ans.f << ' ' << ans.s << endl;
  return ans;
}

ll sumcols(int i, int j) {
  ll ans = 0;
  while (j >= 0) {
    cout << "with " << i << ' ' << i << endl;
    ans += sc[j][i];
    if (i == 0 || j == 0) break;
    i--, j--;
  }
  return ans;
}

void solve() {
  ll n;
  cin >> n;
  auto [i, j] = locate(n);
  ll ans = sumcols(--i, --j);
  cout << ans << endl;
}

int main() {
  _;
  build();
  int t;
  cin >> t;
  t = 5;
  while (t--)
    solve();
  return 0;
}
