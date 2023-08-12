/**
 *    author:  bernborgess
 *    problem: g - selet
 *    created: 12.August.2023 15:44:11
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

const int MAX = 210;
vector<vector<int>> g;
bool vis[MAX];
void bfs(int x) {
  vis[x] = 1;
  for (auto y : g[x])
    if (!vis[y])
      bfs(y);
}

int main() {
  _;
  int n, m;
  cin >> n >> m;
  g.resize(n + m, vi());
  memset(vis, 0, sizeof(vis));

  int lang = 0;
  vi dumb;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;

    if (k == 0) dumb.pb(i);

    for (int j = 0; j < k; j++) {
      int x;
      cin >> x;
      x--;
      g[i].pb(n + x);
      g[n + x].pb(i);
      lang = x;
    }
  }

  int cc = 0;

  for (int i : dumb) {
    g[i].pb(n + lang);
    g[n + lang].pb(i);
    cc++;
  }

  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      bfs(i);
      cc++;
    }
  }
  cout << cc - 1 << endl;

  return 0;
}
