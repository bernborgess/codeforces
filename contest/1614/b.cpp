/**
 *    author:  bernborgess
 *    created: 26.November.2021 08:41:47
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

const int MAX = 1e6 + 10;
vector<pair<ll,ll>> a(MAX);
vector<ll> ans(MAX);



int main() {  _
  int t;
  cin >> t;
  int n;
  while (t--) {
    cin >> n;
    a[0] = {0, 0};
    for (int i = 1; i <= n; i++) {
      cin >> a[i].fst;
      a[i].snd = i;
      // (dist,id)
    }
    sort(a.begin(), a.begin() + n + 1);

    int l = -1, r = 1;
    ll walk = 0;
    ans[0] = 0;
    for (int i = n; i > 0; i--) {
      if (-l > r) {
        // cout<<r<<' ';
        ans[a[i].snd] = r;
        r++;
      } else {
        ans[a[i].snd] = l;
        // cout<<l<<' ';
        l--;
      }
      walk += abs(ans[a[i].snd] - ans[0]) * (ll)a[i].fst;
    }
    cout << 2 * (ll)walk << endl;
    for (int i = 0; i <= n; i++) {
      cout << ans[i] << ' ';
    }
    cout << endl;

    // cout<<a[i].fst<<','<<a[i].snd<<' ';
  }
  return 0;
}
