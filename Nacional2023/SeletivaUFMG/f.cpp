/**
 *    author:  bernborgess
 *    problem: f - selet
 *    created: 12.August.2023 15:11:39
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
#define PI 3.1415927

int main() {
  _;
  int n, R, r;
  cin >> n >> R >> r;

  if (r > R) {
    cout << "NO" << endl;
    return 0;
  }

  double a = R / (double)r;
  if (a < 2) {
    cout << (n < 2 ? "YES" : "NO") << endl;
    return 0;
  }

  int tn = floor(PI / asin(r / (double)(R - r)));

  cout << (n <= tn ? "YES" : "NO") << endl;

  return 0;
}
