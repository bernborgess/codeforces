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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), freq(n);
  for (int& i : a) cin >> i;

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  for (int i = 0; i < n; i++)
    a[i] = mp[a[i]];

  if (k-- == 1) {
    for (int i = 0; i < n; i++)
      cout << a[i] << ' ';
    cout << endl;
    return 0;
  }

  int changes = 0;
  while (k--) {
    freq = vector<int>(n + 10, 0);
    changes = 0;
    for (int i = 0; i < n; i++) {
      freq[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
      if (a[i] != freq[a[i]]) {
        changes++;
        a[i] = freq[a[i]];
      }
    }
    if (changes == 0) break;
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << ' ';
  cout << endl;

  return 0;
}
