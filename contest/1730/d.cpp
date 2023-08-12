/**
 *    author:  bernborgess
 *    problem: d - 1730
 *    created: 25.September.2022 14:13:17
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

bool hasSamePrefix(string& s) {
  int n = s.size();
  map<char, int> l1, l2;
  for (int i = 0; i < (n + 1) / 2; i++) {
    l1[s[i]]++;
  }
  for (int i = (n + 1) / 2; i < n; i++) {
    l2[s[i]]++;
  }
  return l1 == l2;
}

int main() {
  _ int t;
  cin >> t;
  int n;
  while (t--) {
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> l1, l2;
    for (int i = 0; i < n; i++) {
      l1[s1[i]]++;
      l2[s2[i]]++;
    }
    if ((l1 != l2) || !hasSamePrefix(s1) || !hasSamePrefix(s2)) {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;
  }
  return 0;
}
