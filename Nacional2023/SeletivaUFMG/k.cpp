/**
 *    author:  bernborgess
 *    problem: k - selet
 *    created: 12.August.2023 16:14:29
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

int use;

bool canPal(string& s) {
  int n = s.size();
  for (int i = 0; i < (n + 1) / 2; i++) {
    if (s[i] == '?' && s[n - i - 1] == '?') {
      use++;
      continue;
    }
    if (s[i] == '?') {
      s[i] = s[n - i - 1];
      continue;
    }
    if (s[n - i - 1] == '?') {
      s[n - i - 1] = s[i];
      continue;
    }
    if (s[i] != s[n - i - 1]) return false;
  }
  return true;
}

int main() {
  _;
  int k;
  cin >> k;

  set<char> abc;
  for (char ch = 'a'; ch < 'a' + k; ch++)
    abc.insert(ch);

  use = 0;
  string s;
  cin >> s;

  for (char ch : s) {
    if (abc.count(ch))
      abc.erase(ch);
  }

  if (!canPal(s)) {
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }

  if (abc.size() > use) {
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }

  int n = s.size();
  for (int i = 0; i < (n + 1) / 2; i++) {
    if (s[i] == '?') {
      if (use > abc.size()) {
        s[i] = 'a';
        s[n - i - 1] = 'a';
        use--;
        continue;
      }
      char ch = *abc.begin();
      s[i] = ch;
      s[n - i - 1] = ch;
      abc.erase(abc.begin());
      use--;
    }
  }

  cout << s << endl;

  return 0;
}
