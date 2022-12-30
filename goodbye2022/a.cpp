/**
 *    author:  bernborgess
 *    problem: a - goodbye2022
 *    created: 30.December.2022 10:31:54
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n, k;
vector<int> a;

bool canCut(double len) {
  int can = 0;
  for (int i = 0; i < a.size(); i++)
    if (a[i] >= len) {
      can += floor((double)a[i] / len);
    }
  return can >= k;
}

int main() {
  _;
  cout << fixed << setprecision(20);
  cin >> n >> k;
  a.resize(n);
  double l = 0.0, r = 1e7 + 10;
  for (int& i : a) cin >> i;
  int iter = 50;
  while (iter--) {
    double mid = (l + r) / 2.0;
    if (canCut(mid))
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;
  return 0;
}
