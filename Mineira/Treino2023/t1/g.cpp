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
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n;
int q;

enum Sim {
  e = 0,
  r,
  r2,
  r3,
  tx,
  ty,
  tAC,
  tBD
};

enum Sim operate[8][8] = {
    // e r r2 r3 tx ty tAC tBD
    {e, r, r2, r3, tx, ty, tAC, tBD},  // e
    {r, r2, r3, e, tAC, tBD, ty, tx},  // r
    {r2, r3, e, r, ty, tx, tBD, tAC},  // r2
    {r3, e, r, r2, tBD, tAC, tx, ty},  // r3
    {tx, tBD, ty, tAC, e, r2, r3, r},  // tx
    {ty, tAC, tx, tBD, r2, e, r, r3},  // ty
    {tAC, tx, tBD, ty, r, r3, e, r2},  // tAC
    {tBD, ty, tAC, tx, r3, r, r2, e},  // tBD
};

pii e_r(pii ij) {
  auto [i, j] = ij;
  return {j, n - i - 1};
}

pii e_tAC(pii ij) {
  auto [i, j] = ij;
  return {j, i};
}

pii e_tBD(pii ij) {
  auto [i, j] = ij;
  return {n - j - 1, n - i - 1};
}

int id(enum Sim sim, pii ij) {
  if (sim == r) ij = e_r(ij);
  if (sim == r2) ij = e_r(e_r(ij));
  if (sim == r3) ij = e_r(e_r(e_r(ij)));
  if (sim == tAC) ij = e_tAC(ij);
  if (sim == tBD) ij = e_tBD(ij);
  auto [i, j] = ij;
  return i * n + j + 1;
}

int main() {
  _;
  cin >> n >> q;
  enum Sim sim = e;
  while (q--) {
    string what;
    cin >> what;
    if (what == "q") {
      int i, j;
      cin >> i >> j;
      i--, j--;
      cout << id(sim, {i, j}) << endl;
      continue;
    }
    if (what == "r") {
      cin >> what;
      if (what == "a")
        sim = operate[tAC][sim];
      if (what == "b")
        sim = operate[ty][sim];
      if (what == "c")
        sim = operate[tBD][sim];
      if (what == "d")
        sim = operate[tx][sim];
    }
  }

  return 0;
}
