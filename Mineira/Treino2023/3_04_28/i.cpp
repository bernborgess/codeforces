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
typedef pair<int, int> pii;

enum Type { PROD,
            RAW };

union El {
  vector<int> deps;
  int amt;
};

struct Item {
  Type type;
  union El e;
};

vector<Item> items;

bool canBuild(int id) {
  auto& it = items[id];
  if (it.type == RAW)
    return it.e.amt--;
  for (auto dep : it.e.deps) {
    if (!canBuild(dep))
      return false;
  }
  return true;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;

  return 0;
}
