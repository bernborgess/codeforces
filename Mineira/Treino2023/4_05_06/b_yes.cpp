#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 7901;

#define pb push_back
#define f first
#define s second
#define umap unordered_map

typedef vector<int> vi;
typedef vector<vi> vvi;

const int maxn = 1e5 + 100;

#define BIG 3947
typedef pair<ll, ll> pll;
const ll MH1 = 1000000223;
const ll MH2 = 1000003519;

#define debug(x) cout << #x << ' ' << x << endl

map<pll, int> id;
map<pll, int> bob;
map<pll, pll> pot;
umap<int, int> ap;

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    id.clear(); bob.clear(); pot.clear(); ap.clear();
    int cnt = 1;
    vector<pll> edges;
    for (int i = 0; i < n; i++) {
      int u, v;
      cin >> u >> v;
      if (u > v) swap(u, v);
      edges.pb({u, v});
      if (!id.count({u, v})) id[{u, v}] = cnt++;
      ap[id[{u, v}]]++;
    }
    ll temp = 1;
    ll temp2 = 1;
    for (auto [x, y] : ap) {
      for (int i = 0; i < y; i++) {
        pot[{x, i + 1}] = {temp, temp2};
        temp *= BIG;
        temp %= MH1;
        temp2 *= BIG;
        temp2 %= MH2;
      }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
      ap.clear();
      ll hb = 0;
      ll hb2 = 0;
      for (int j = i; j < n; j++) {
        int ids = id[edges[j]];
        ap[ids]++;
        auto [p1, p2] = pot[{ids, ap[ids]}];
        int kc = (ids * p1) % MH1;
        int kc2 = (ids * p2) % MH2;
        hb += kc;
        hb2 += kc2;
        hb %= MH1;
        hb2 %= MH2;
        bob[{hb, hb2}]++;
      }
    }

    for (auto [k, v] : bob) {
      ans += (v) * (v - 1) / 2ll;
    }
    cout << ans << endl;
  }
  return 0;
}
