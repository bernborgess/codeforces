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

const int MAX = 1e7 + 10;

int divi[MAX];
void crivo() {
  for (int i = 1; i < MAX; i++) divi[i] = 1;
  for (int i = 2; i < MAX; i++)
    if (divi[i] == 1)
      for (int j = i; j < MAX; j += i) {
        if (divi[j] == 1)
          divi[j] = i;
      }
}

void solve() {
  int n, m;
  cin >> n >> m;
  if (m == 1 || n == 1) {
    cout << "YES" << endl;
    return;
  }
  if (n == m) {
    cout << "NO" << endl;
    return;
  }

  cout << (divi[n] > m ? "YES" : "NO") << endl;
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
