#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve() {
  string s;
  cin >> s;
  string cf = "codeforces";
  int ans = 0;
  for (int i = 0; i < 10; i++) {
    if (s[i] != cf[i])
      ans++;
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();

  exit(0);
}
