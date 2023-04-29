#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(X) begin(X), end(X)

const int N = 2e5 + 5;

int n, q;
int a[N];
vector<int> st[4 * N];

void build(int node, int l, int r) {
  if (l == r) {
    st[node].pb(a[l]);
    return;
  }
  int mid = (l + r) / 2;
  build(2 * node, l, mid);
  build(2 * node + 1, mid + 1, r);
  merge(all(st[2 * node]),
        all(st[2 * node + 1]),
        back_inserter(st[node]));
}

int query(int node, int l, int r, int ql, int qr, int x) {
  if (r < ql || qr < l) return 0;
  if (ql <= l && r <= qr) {
    auto it = upper_bound(all(st[node]), x);
    return it - st[node].begin();
  }
  int mid = (l + r) / 2;
  return max(query(2 * node, l, mid, ql, qr, x),
             query(2 * node + 1, mid + 1, r, ql, qr, x));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  build(1, 1, n);

  while (q--) {
    int l, r;
    cin >> l >> r;
    int ans = 1;
    for (int i = 0; i < 20; i++) {
      if ((1 << i) > r - l + 1) break;
      int x = a[l + (rand() % (r - l + 1))];
      ans = max(ans, query(1, 1, n, l, r, x) + 1);
    }
    cout << ans << "\n";
  }

  return 0;
}