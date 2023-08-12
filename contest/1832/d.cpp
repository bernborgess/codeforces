/**
 *    author:  bernborgess
 *    problem: d - 1832
 *    created: 12.May.2023 12:36:01
 **/
#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
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
typedef vector<bool> vb;
typedef vector<vi> vvi;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct State {
  int k;
  vector<bool> isblue;
  vector<int> val;
};

void printState(int k, vb isblue, vi val) {
  cout << k << " [";
  for (bool b : isblue) cout << b << ' ';
  cout << "\b] [";
  for (int v : val) cout << v << ' ';
  cout << "\b] ";
}

vi ME(12, -INF);
int menor_original = INF;
void calc(int lim) {
  queue<State> q;
  q.push({0, {false, false}, {2, 3}});
  while (!q.empty()) {
    auto [k, isblue, val] = q.front();
    q.pop();
    printState(k, isblue, val);
    int mel = *min_element(all(val));
    cout << mel << endl;
    if (mel > ME[k]) {
      cout << "BETTER GUY" << endl;
      ME[k] = mel;
    }
    if (k == lim) continue;
    for (int i = 0; i < val.size(); i++) {
      vi nval = val;
      nval[i] += isblue[i] ? -(k + 1) : k + 1;
      vb nisblue = isblue;
      nisblue[i] = !nisblue[i];
      int nmel = *min_element(all(nval));
      if (nmel >= menor_original)
        q.push({k + 1, nisblue, nval});
    }
  }
}

int main() {
  _;
  // int n, q;
  // cin >> n >> q;
  // vi a(n);
  // for (int& i : a) cin >> i;
  // int k;
  // while (q--) {
  //   cin >> k;
  // }

  // ! TEST BRUTE
  int n = 2, q = 5;
  vi a = {2, 3};
  vi qs = {6, 1, 3};
  menor_original = *min_element(all(a));
  calc(6);
  for (int q : qs) cout << ME[q] << ' ';
  cout << endl;

  return 0;
}
