/**
 *    author:  bernborgess
 *    problem: e - TreinoSubReg
 *    created: 20.August.2023 09:02:07
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

int main() {
  _;
  string m, c;
  cin >> m >> c;
  int ans = 0;

  for (int i = 0; i + c.size() <= m.size(); i++) {
    bool can = true;
    for (int j = 0; j < c.size() && can; j++) {
      if (m[i + j] == c[j]) can = false;
    }
    ans += can;
  }
  cout << ans << endl;

  return 0;
}
