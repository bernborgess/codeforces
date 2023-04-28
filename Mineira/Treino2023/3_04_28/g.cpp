#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define pb push_back
#define sqr(a) (a) * (a)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define debug(x) cout << #x << " = " << x << endl
typedef pair<int, int> pii;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, k;
  cin >> n >> k;
  vector<pii> v(n);
  map<int, int> mp;
  int trivial = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i].f >> v[i].s;

    if (v[i].s - v[i].f + 1 >= k) {
      trivial++;
      continue;
    }

    int l = v[i].f % k;
    int r = v[i].s % k + 1;

    if (l > r) {
      mp[0]++;
      mp[r]--;
      // line sweep comprimido
      mp[l]++;
      mp[k]--;
    } else {
      mp[l]++;
      mp[r]--;
    }
  }

  int ans = 0;
  int curr = 0;
  for (auto [x, y] : mp) {
    curr += y;
    ans = max(ans, curr);
  }
  cout << ans + trivial << endl;

  return 0;
}
