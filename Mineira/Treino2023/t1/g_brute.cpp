/**
 *    author:  bernborgess
 *    problem: g_brute - t1
 *    created: 20.April.2023 16:18:27
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound  // iterator for first el not less than x
#define upb upper_bound  // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
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

int n;
vvi M;

void r_a() {
  vvi temp(n, vi(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      temp[i][j] = M[j][i];
  M = temp;
}

void r_b() {
  vvi temp(n, vi(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      temp[i][j] = M[j][n - i - 1];
  M = temp;
}
void r_c() {
  vvi temp(n, vi(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      temp[i][j] = M[n - i - 1][n - j - 1];
  M = temp;
}
void r_d() {
  vvi temp(n, vi(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      temp[i][j] = M[n - i - 1][j];
  M = temp;
}
int main() {
  _;
  int q;
  cin >> n >> q;
  M = vvi(n, vi(n));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      M[i][j] = i * n + j + 1;

  string what;
  while (q--) {
    cin >> what;
    if (what == "q") {
      int i, j;
      cin >> i >> j;
      i--, j--;
      cout << M[i][j] << endl;
      continue;
    }
    if (what == "r") {
      cin >> what;
      if (what == "a")
        r_a();
      if (what == "b")
        r_b();
      if (what == "c")
        r_c();
      if (what == "d")
        r_d();
      continue;
    }
  }
  return 0;
}
