/**
 *    author:  bernborgess
 *    problem: b - goodbye2022
 *    created: 30.December.2022 12:31:44
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
/*
n=5
k=3
p= 1 2 3 4 5 (misturar)'
   (   )   |
     (   ) |
       (   )

p= 5 3 1 4 2 > custo 6 (k=3)

c= [4,6,8]


c1 = max(p1,...pk) (tres primeiros)
   + min(p1,...pk)
   3 + 1 = 4
c2

custo de p = max c = 8


    (  , , )
( , , )( , )
 5   3  4

*/

int main() {
  _;
  int t;
  cin >> t;
  int n, k;
  while (t--) {
    cin >> n >> k;
    vector<int> a(n);
    vector<int> g(n);
    iota(all(a), 1);
    int mcost = INF;
    do {
      int Mc = -INF;
      for (int i = 0; i <= n - k; i++) {
        int M = -INF;
        int m = INF;
        for (int j = 0; j < k; j++) {
          M = max(M, a[i + j]);
          m = min(m, a[i + j]);
        }
        Mc = max(Mc, M + m);
      }

      if (Mc < mcost) {
        mcost = Mc;
      }
    } while (next_permutation(all(a)));

    cout << "ALL SOLUTIONS " << endl;
    debug(n);
    debug(k);
    do {
      int Mc = -INF;
      for (int i = 0; i <= n - k; i++) {
        int M = -INF;
        int m = INF;
        for (int j = 0; j < k; j++) {
          M = max(M, a[i + j]);
          m = min(m, a[i + j]);
        }
        Mc = max(Mc, M + m);
      }

      if (Mc == mcost) {
        for (auto i : a) cout << i << ' ';
        cout << endl;
      }
    } while (next_permutation(all(a)));
  }
  return 0;
}