/**
 *    author:  bernborgess
 *    created: 20.December.2021 11:58:19
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
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {  // _
  int t;
  cin >> t;
  string a, s, b;
  while (t--) {
    cin >> a >> s;
    b.clear();
    int idx = s.size() - 1;
    bool fail = false;
    for (int i = a.size() - 1; i >= 0; i--) {
      if (a[i] > s[idx]) {  // carry
        if (idx == 0 || s[idx - 1] != '1') {
          fail = true;
          break;
        }
        b.pbk((s[idx] - '0' + 10) - (a[i] - '0') + '0');
        idx -= 2;
      } else {
        b.pbk((s[idx] - '0') - (a[i] - '0') + '0');
        idx--;
      }
    }
    if (fail) {
      cout << -1 << endl;
      continue;
    }
    while (idx >= 0) {
      b.pbk(s[idx]);
      idx--;
    }
    reverse(b.begin(), b.end());
    b.erase(0, b.find_first_not_of('0'));
    cout << b << endl;
  }
  return 0;
}
