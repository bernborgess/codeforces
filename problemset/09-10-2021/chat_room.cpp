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
  string s;
  cin >> s;
  int idx = 0;
  string hello = "hello";
  for (char c : s) {
    if (c == hello[idx]) 
      idx++;
    if (idx >= hello.length())
      break;
  }
  cout<<(idx>=5?"YES":"NO")<<endl;
  return 0;
}
