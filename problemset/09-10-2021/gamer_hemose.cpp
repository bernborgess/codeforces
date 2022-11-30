#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _ 
  int t, n, H, pres, vice, temp, times;
  cin >> t;
  while (t--) {
    pres = 0, vice = 0;
    cin >> n >> H;
    for (int i = 0; i < n; i++) {
      cin >> temp;
      if (temp > pres) {
        vice = pres;
        pres = temp;
      } else if (temp > vice) {
        vice = temp;
      }
    }
    times = H / (pres + vice);
    H %= (pres + vice);
    cout << 2 * times + (!H ? 0 : (H - pres <= 0 ? 1 : 2)) << endl;
  }
  return 0;
}
