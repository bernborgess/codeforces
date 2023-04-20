#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define endl '\n'
#define all(x) begin(x), end(x)
#define pb push_back

typedef long long ll;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

// Kosaraju
const int MAX = 6e5 + 10;
int n;
vi g[MAX];
vi gi[MAX];
int vis[MAX];
stack<int> S;
int comp[MAX];

void dfs(int k) {
  vis[k] = 1;
  for (int i = 0; i < (int)g[k].size(); i++)
    if (!vis[g[k][i]])
      dfs(g[k][i]);
  S.push(k);
}

void scc(int k, int c) {
  vis[k] = 1;
  comp[k] = c;
  for (int i = 0; i < (int)gi[k].size(); i++)
    if (!vis[gi[k][i]])
      scc(gi[k][i], c);
}

void kosaraju() {
  for (int i = 0; i < 2 * n; i++) vis[i] = 0;
  for (int i = 0; i < 2 * n; i++)
    if (!vis[i])
      dfs(i);

  for (int i = 0; i < 2 * n; i++)
    vis[i] = 0;
  while (S.size()) {
    int u = S.top();
    S.pop();
    if (!vis[u])
      scc(u, u);
  }
}

// End Kosaraju

enum Op {
  EQ,
  NE,
  LT,
  GT,
  LE,
  GE
};

struct Ex {
  int x;
  int y;
  enum Op op;
  int c;
};

void add_edge(int i, int j) {
  g[i].pb(j);
  gi[j].pb(i);
}

void add_ne(int i, int j, int c) {
  if (c == 0) {
    add_edge(i + n, j);
    add_edge(j + n, i);
    return;
  }
  if (c == 1) {
    add_edge(i + n, j + n);
    add_edge(j + n, i + n);
    add_edge(i, j);
    add_edge(j, i);
    return;
  }
  if (c == 2) {
    add_edge(j, i + n);
    add_edge(i, j + n);
    return;
  }
}

// x ---   ~x ----
void add_eq(int i, int j, int c) {
  if (c == 0) {
    add_edge(i, i + n);
    add_edge(j, j + n);
    return;
  }
  if (c == 1) {
    add_ne(i, j, 0);
    add_ne(i, j, 2);
    return;
  }
  if (c == 2) {
    add_edge(i + n, i);
    add_edge(j + n, j);
    return;
  }
}

int main() {
  _;
  int m;
  cin >> n >> m;
  int x, y, c;
  string ops;
  bool can = true;
  for (int i = 0; i < m; i++) {
    cin >> x >> y >> ops >> c;
    if (ops == "=") {
      add_eq(x, y, c);
    }
    if (ops == "!=") {
      add_ne(x, y, c);
    }
    if (ops == "<") {
      if (c == 0) {
        can = false;
        break;
      }
      if (c == 1) {
        add_eq(x, y, 0);
        continue;
      }
      if (c == 2) {
        add_ne(x, y, 2);
      }
    }
    if (ops == ">") {
      if (c == 0) {
        add_ne(x, y, 0);
        continue;
      }
      if (c == 1) {
        add_eq(x, y, 2);
        continue;
      }
      if (c == 2) {
        can = false;
        break;
      }
    }
    if (ops == "<=") {
      if (c == 0) {
        add_eq(x, y, 0);
        continue;
      }
      if (c == 1) {
        add_ne(x, y, 2);
        continue;
      }
    }
    if (ops == ">=") {
      if (c == 1) {
        add_ne(x, y, 0);
        continue;
      }
      if (c == 2) {
        add_eq(x, y, 2);
        continue;
      }
    }
  }

  if (!can) {
    cout << "No" << endl;
    exit(0);
  }

  kosaraju();

  for (int i = 0; i < n && can; i++) {
    if (comp[i] == comp[i + n])
      can = false;
  }

  cout << (can ? "Yes" : "No") << endl;

  return 0;
}
