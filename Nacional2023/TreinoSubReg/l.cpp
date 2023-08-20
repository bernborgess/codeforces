/**
 *    author:  bernborgess
 *    problem: l - TreinoSubReg
 *    created: 20.August.2023 10:14:54
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

const int MAX = 1e5 + 10;

// segtree
namespace seg {
ll seg[4 * MAX], lazy[4 * MAX];
int n, *v;

ll build(int p = 1, int l = 0, int r = n - 1) {
  lazy[p] = 0;
  if (l == r) return seg[p] = v[l];
  int m = (l + r) / 2;
  return seg[p] = build(2 * p, l, m) + build(2 * p + 1, m + 1, r);
}

void build(int n2, int* v2) {
  n = n2, v = v2;
  build();
}
void prop(int p, int l, int r) {
  seg[p] += lazy[p] * (r - l + 1);
  if (l != r) lazy[2 * p] += lazy[p], lazy[2 * p + 1] += lazy[p];
  lazy[p] = 0;
}

ll query(int a, int b, int p = 1, int l = 0, int r = n - 1) {
  prop(p, l, r);
  if (a <= l && r <= b) return seg[p];
  if (b < l || r < a) return 0;
  int m = (l + r) / 2;
  return query(a, b, 2 * p, l, m) + query(a, b, 2 * p + 1, m + 1, r);
}

ll update(int a, int b, int x, int p = 1, int l = 0, int r = n - 1) {
  prop(p, l, r);
  if (a <= l && r <= b) {
    lazy[p] += x;
    prop(p, l, r);
    return seg[p];
  }
  if (b < l || r < a) return seg[p];
  int m = (l + r) / 2;
  return seg[p] = update(a, b, x, 2 * p, l, m) +
                  update(a, b, x, 2 * p + 1, m + 1, r);
}

}  // namespace seg

// lca com hld
namespace hld {
vector<int> g[MAX];
int pos[MAX], sz[MAX];
int peso[MAX], pai[MAX];
int h[MAX], v[MAX], t;

void build_hld(int k, int p = -1, int f = 1) {
  v[pos[k] = t++] = peso[k];
  sz[k] = 1;
  for (auto& i : g[k])
    if (i != p) {
      pai[i] = k;
      h[i] = (i == g[k][0] ? h[k] : i);
      build_hld(i, k, f);
      sz[k] += sz[i];
      if (sz[i] > sz[g[k][0]] || g[k][0] == p)
        swap(i, g[k][0]);
    }
  if (p * f == -1) build_hld(h[k] = k, -1, t = 0);
}

void build(int root = 0) {
  t = 0;
  build_hld(root);
  seg::build(t, v);
}

ll query_path(int a, int b) {
  if (pos[a] < pos[b]) swap(a, b);
  if (h[a] == h[b]) return seg::query(pos[b], pos[a]);
  return seg::query(pos[h[a]], pos[a]) +
         query_path(pai[h[a]], b);
}

void update_path(int a, int b, int x) {
  if (pos[a] < pos[b]) swap(a, b);
  if (h[a] == h[b]) return (void)seg::update(pos[b], pos[a], x);
  seg::update(pos[h[a]], pos[a], x);
  update_path(pai[h[a]], b, x);
}

}  // namespace hld

int main() {
  _;
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    hld::g[u].pb(v);
    hld::g[v].pb(u);
  }
  hld::build();

  while (q--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--, b--, c--, d--;
    hld::update_path(a, b, 1);
    cout << hld::query_path(c, d) << endl;
    hld::update_path(a, b, -1);
  }
  return 0;
}
