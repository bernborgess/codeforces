#include <bits/stdc++.h>

#define f first
#define s second
#define pb push_back
#define read(x) \
  for (auto& qw : (x)) cin >> qw;

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 1000000007;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    int m;
    cin >> n >> m;
    vector<ll> v(n);
    read(v);
    vector<ll> pref;
    pref.pb(0);
    ll total = 0;
    for (int i = 0; i < n; i++) {
      total += v[i];
      pref.pb(pref[i] + v[i]);
    }
    vector<pii> truepref;
    truepref.pb({0, 0});
    for (int i = 1; i < pref.size(); i++) {
      if (pref[i] >= truepref.back().f) {
        truepref.pb({pref[i], i});
      }
    }

    while (m--) {
      ll x;
      cin >> x;
      ll mm = truepref.back().f;
      if (total <= 0 and x > mm) {
        cout << -1 << " ";
        continue;
      } else if (total <= 0 and x <= mm) {
        int ini = 1;
        int fim = truepref.size() - 1;
        int qual = -1;
        int cont = 0;
        while (ini <= fim) {
          cont++;
          if (cont == 200) {
            break;
          }
          int meio = (ini + fim) / 2;
          if (truepref[meio].f >= x) {
            qual = truepref[meio].s - 1;
            fim = meio - 1;
          } else {
            ini = meio + 1;
          }
        }
        cout << qual << " ";
        continue;
      } else {
        ll ans = (x - mm) / total;

        if ((x - mm) % total != 0 and x >= mm) {
          ans++;
        }
        ans = max(ans, 0ll);
        x -= (ans * total);

        int ini = 1;
        int fim = truepref.size() - 1;
        int qual = -1;
        int cont = 0;

        while (ini <= fim) {
          cont++;
          if (cont == 200) {
            break;
          }
          int meio = (ini + fim) / 2;
          if (truepref[meio].f >= x) {
            qual = truepref[meio].s - 1;
            fim = meio - 1;
          } else {
            ini = meio + 1;
          }
        }
        if (qual == -1) {
          cout << -1 << " ";
        } else {
          cout << ans * n + qual << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}
