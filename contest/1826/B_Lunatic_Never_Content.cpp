/**
 *    author:  bernborgess
 *    problem: B_Lunatic_Never_Content - 1826
 *    created: 05.May.2023 12:08:17
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

const int MAX = 1e7 + 10;

int divi[MAX];
void crivo() {
  for (int i = 1; i < MAX; i++) divi[i] = 1;
  for (int i = 2; i < MAX; i++)
    if (divi[i] == 1)
      for (int j = i; j < MAX; j += i)
        divi[j] = i;
}
void factorize(vi& f, int x) {
  if (x != divi[x])
    factorize(f, x / divi[x]);
  f.pb(divi[x]);
}

bool isPalindrome(vi& v) {
  int l = 0, r = v.size() - 1;
  while (l < r) {
    if (v[l] != v[r]) return false;
    l++, r--;
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int MAX = -INF;
  for (int& i : a) {
    cin >> i;
    if (i > MAX) MAX = i;
  }
  if (isPalindrome(a)) {
    cout << 0 << endl;
    return;
  }
  int ans = 0;
  int l = 0, r = a.size() - 1;
  while (l < r) {
    if (a[l] != a[r]) {
      ans = __gcd(ans, abs(a[l] - a[r]));
    }
    l++, r--;
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
