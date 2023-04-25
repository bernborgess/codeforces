#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, comp = 0, lst = 0;
  string s, t;
  cin >> n >> s >> t;
  long long qnt1 = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == t[i])
      lst = 0;
    else {
      ++qnt1;
      if (lst == 0) lst = 1, ++comp;
    }
  }
  if (n == 1 && qnt1 == 1)
    cout << 0 << endl;
  else if (comp > 2)
    cout << 0 << endl;
  else if (comp == 2)
    cout << 6 << endl;
  else if (comp == 1) {
    cout << (2 * qnt1 - 2) + (n - qnt1) * 2 << endl;
  } else {
    cout << (n * (n + 1ll)) / 2 << endl;
  }
}

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}