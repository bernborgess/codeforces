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
  int n, k;
  cin >> n >> k;
  int next = 0;
  int limit = 0;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (a < limit)
      break;

    if (a > 0)
      next++;

    if (i == k)
      limit = a;
  }
  cout << next << endl;
  return 0;
}
