/**
 *    author:  bernborgess
 *    problem: b - TreinoSubReg
 *    created: 20.August.2023 09:11:50
 **/
#include <bits/stdc++.h>

using namespace std;

#define _ cin.tie(0)->sync_with_stdio(0)
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
#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)
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

int winner(int l, int c) {
  return (l == 0 || c == 0 || l == c);
}

const int MAX = 102;
ll gr[MAX][MAX];

ll mex(int l, int c) {
  static bool used[10 * MAX];
  memset(used, 0, sizeof(used));

  // this col
  for (int i = 0; i < l; i++)
    used[gr[i][c]] = 1;

  // this row
  for (int j = 0; j < c; j++)
    used[gr[l][j]] = 1;

  // this diag
  for (int k = 1; k <= min(l, c); k++)
    used[gr[l - k][c - k]] = 1;

  // find mex
  ll mx = 0;
  while (used[mx]) mx++;

  return mx;
}

int main() {
  _;
  const int OOB = (10 * MAX) - 1;
  for (int i = 0; i < MAX; i++)
    gr[i][i] = gr[0][i] = gr[i][0] = OOB;

  for (int i = 1; i < MAX; i++) {
    for (int j = 1; j < MAX; j++) {
      if (i == j) continue;
      gr[i][j] = mex(i, j);
    }
  }

  int N;
  cin >> N;
  vector<pii> mb;
  ll xr = 0;
  for (int i = 0; i < N; i++) {
    int l, c;
    cin >> l >> c;
    if (winner(l, c)) {
      cout << "Y" << endl;
      return 0;
    }
    xr ^= gr[l][c];
  }

  cout << (xr == 0 ? "N" : "Y") << endl;

  return 0;
}