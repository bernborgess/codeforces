// gcd( 2, 6) = 2
// gcd( 11,7) = 1

/**
 *    author:  bernborgess
 *    problem: c - goodbye2022
 *    created: 30.December.2022 13:11:42
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

// [2,6,7,10]
// x=2
// (   )
// (   )
// x=3
//  2 10

// gcd([a,b,c]) = gcd(gcd([a,b]),gcd(c))

int main() {
  _;
  int t;
  cin >> t;
  int n;
  while (t--) {
    cin >> n;
    int Es = 0;
    int Os = 0;
    int ones = 0;
    bool rep = false;
    set<int> a;
    int allgcd = -1;
    for (int i = 0; i < n; i++) {
      int el;
      cin >> el;
      if (!i)
        allgcd = el;
      else
        allgcd = __gcd(allgcd, el);
      if (rep) continue;
      if (el != 1) {
        if (a.count(el)) {
          rep = true;
          continue;
        }
        a.insert(el);
      } else {
        ones++;
        continue;
      }
      if (el % 2 == 0)
        Es++;
      else
        Os++;
    }
    if (ones > 1) {
      // only if gcd all is already 1
      if (allgcd != 1) rep = true;
    }
    if ((Es > 1 && Os > 1) || rep) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
