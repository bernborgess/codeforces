#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define pb push_back
#define sqr(a) (a) * (a)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define debug(x) cout << #x << " = " << x << endl

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int x;
  cin >> x;
  if (x <= -3) {
    cout << (-sqr(x + 4) + 8) << endl;
  } else if (x <= 2) {
    cout << (-2 * x + 1) << endl;
  } else {
    cout << (x * x * x - 14 * x + 17) << endl;
  }
  return 0;
}
