/**
 *    author:  bernborgess
 *    problem: d - 1823
 *    created: 27.April.2023 11:19:38
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

char _curr;
char newCh() {
  _curr++;
  if (_curr == 'd') _curr = 'a';
  return _curr;
}

void solve() {
  int n, k;
  cin >> n >> k;
  _curr = 'a';
  vector<pii> cds(k);
  for (int i = 0; i < k; i++)
    cin >> cds[i].fst;
  for (int i = 0; i < k; i++)
    cin >> cds[i].snd;

  sort(all(cds));
  bool bust = 0;
  int cM = 0;
  int xM = 0;
  for (int i = 0; i < k && !bust; i++) {
    auto [x, c] = cds[i];
    if (x < c || (c < 3 && x != c) || c < cM || x <= xM) {
      bust = 1;
      break;
    }
    xM = x;
    cM = c;
  }
  if (bust) cout << "NO" << endl;
  cout << "YES" << endl;
  if (n < 3) {
    if (n == 1) cout << 'a' << endl;
    if (n == 2) cout << "ab" << endl;
    return;
  }

  int head = 0;
  int abc = 3;
  int X = 3, C = 3;
  for (int i = 0; i < k; i++) {
    auto [x, c] = cds[i];
    head += (c - C);
    abc += (x - c) - (X - C);
    X = x;
    C = c;
  }

  for (int i = 0; i < head; i++)
    cout << 'a';
  for (int i = 0; i < abc; i++)
    cout << newCh();
  cout << endl;
}

int main() {
  _;
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
