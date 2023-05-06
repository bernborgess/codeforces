/**
 *    author:  bernborgess
 *    problem: C_Dreaming_of_Freedom - 1826
 *    created: 05.May.2023 12:45:16
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
#define int long long

const int MAX_PRIMO = 1e6 + 10;
bool primo[MAX_PRIMO];
vi p;

void crivo() {
  memset(primo, true, sizeof(primo));
  primo[0] = false;
  primo[1] = false;
  for (int pr = 2; pr <= MAX_PRIMO; pr++) {
    if (primo[pr]) {
      p.pb(pr);
      for (int i = pr * pr; i <= MAX_PRIMO; i += pr)
        primo[i] = false;
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  if (n == m) {
    cout << "NO" << endl;
    return;
  }
  int i = 0;
  bool coprime = true;
  while (p[i] <= m) {
    if (!(n % p[i])) {
      coprime = false;
      break;
    }
    i++;
    if (i >= p.size()) {
      cout << "com n=" << n << " estoura i=" << i << endl;
      debug(p[i - 1]);
      break;
    }
  }
  cout << (coprime ? "YES" : "NO") << endl;
}

int32_t main() {
  _;
  crivo();
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
