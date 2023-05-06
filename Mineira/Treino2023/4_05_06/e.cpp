/**
 *    author:  bernborgess
 *    problem: e - 4_05_06
 *    created: 06.May.2023 12:02:25
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
const int MAX = 1010;
int n, m;
int G[MAX][MAX];
int vis[MAX][MAX];
vector<pii> mvs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j) {
  if (i < 0 || i >= n) return false;
  if (j < 0 || j >= m) return false;
  if (!G[i][j]) return false;
  if (vis[i][j]) return false;
  return true;
}

ll dfs(int i, int j) {
  vis[i][j] = true;
  ll ans = G[i][j];
  for (auto [di, dj] : mvs) {
    if (valid(i + di, j + dj)) {
      ans += dfs(i + di, j + dj);
    }
  }
  return ans;
}

void solve() {
  memset(vis, 0, sizeof(vis));
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> G[i][j];
    }
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (G[i][j] && !vis[i][j]) {
        ans = max(ans, dfs(i, j));
      }
    }
  }
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
