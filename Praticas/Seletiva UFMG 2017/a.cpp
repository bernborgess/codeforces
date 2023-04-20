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
  ll t; cin >> t;
  bool flag = t % 2, busted = false;
  int top = log2(t);
  for (int i = 1; i <= top; i++) {
    if (flag == (t >> i) % 2) {
      busted = true;
      break;
    }
    flag = !flag;
  }
  cout << (busted ? "-1" : "1") << endl;
  return 0;
}


