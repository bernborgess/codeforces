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

int n, m;
const int MAX = 1e3 + 10;

short a[MAX][MAX];
bool vis[MAX][MAX];

//? Wall Scheme: NESW
//?              8421
vector<pair<int, int>> mov = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

bool val(pii u) {
  return u.fst >= 0 && u.snd >= 0 && u.fst < n && u.snd < m;
}

int bfs(pii s) {
  queue<pii> q;
  q.push(s);
  vis[s.fst][s.snd] = 1;
  int roomSize = 1;
  while (!q.empty()) {
    pii v = q.front();
    q.pop();

    for (int i = 0; i < 4; i++) {
      if (!(a[v.fst][v.snd] & 1 << i)) {
        pii u = mov[i];
        u.fst += v.fst;
        u.snd += v.snd;
        if (val(u) && !vis[u.fst][u.snd]) {
          q.push(u);
          roomSize++;
          vis[u.fst][u.snd] = 1;
        }
      }
    }
  }
  return roomSize;
}

int main() { _
  cin >> n >> m;
  //* input
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  //* rooms
  vector<int> rooms;
  memset(vis, false, sizeof(vis));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!vis[i][j]) {
        rooms.push_back(
            bfs({i, j}));
      }
    }
  }
  sort(rooms.rbegin(), rooms.rend());
  for (auto x : rooms) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}