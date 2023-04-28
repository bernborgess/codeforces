#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sqr(a) (a) * (a)
#define endl '\n'
#define aint(v) v.begin(), v.end()
#define raint(v) v.rbegin(), v.rend()
#define debug(x) cout << #x << " = " << x << endl
typedef pair<int, int> pii;
#define int long long
int MOD;
int fexp(int base, int exp) {
  int ret = 1LL;
  while (exp) {
    if (exp & 1)
      ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

int rng(int a, int b, int x, int p) {
  return ((a * x) % p + b) % p;
}

void solve() {
  int a, b, s, p, v;
  cin >> a >> b >> s >> p >> v;
  if (s == v) {
    cout << 0 << endl;
    return;
  }

  // supposed we know its possible

  int ans = 0;
  int x = s;
  while (x != v) {
    x = rng(a, b, x, p);
    ans++;
  }
  cout << ans << endl;
  int x1 = (a * s + b) % p;
  int x2 = (a * (a * s + b) + b) % p;
  // x2 = (aax + ab) % p;
  int x3 = (a * (a * (a * s + b) + b) + b) % p;
  // x3 = (a * (aas+ab+ b) + b) % p;
  // x3 = (aaas+aab+ab+b) % p;
  int x4 = (a * (a * (a * (a * s + b) + b) + b) + b) % p;
  // x4 = (a * (aaas+aab+ab+b) + b) % p;
  // x4 = (aaaaas+aaab+aab+ab+b) % p;

  // xn = (a**(n+1))*s + b*(a**(n-1)+...+a+1))%p

  // if (impossible) {
  //   cout << "IMPOSSIBLE" << endl;
  //   return;
  // }
  // cout << ans << endl;
}

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
