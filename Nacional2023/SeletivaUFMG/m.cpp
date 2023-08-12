/**
 *    author:  bernborgess
 *    problem: m - selet
 *    created: 12.August.2023 14:56:40
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

int MAX = 2e4 + 10;

vi ans(MAX, INF);
int n, m;

void bfs() {
  queue<pii> q;
  q.push({m, 0});
  while (!q.empty()) {
    auto [x, d] = q.front();
    q.pop();
    if (x == n) {
      ans[n] = d;
      return;
    }
    if (ans[x] <= d) continue;
    ans[x] = d;
    if (x % 2 == 0) {
      q.push({x / 2, d + 1});
    }
    if (x + 2 < MAX) {
      q.push({x + 1, d + 1});
    }
  }
}

int main() {
  _;
  cin >> n >> m;
  if (m <= n) {
    cout << n - m << endl;
    return 0;
  }

  bfs();

  cout << ans[n] << endl;

  return 0;
}
