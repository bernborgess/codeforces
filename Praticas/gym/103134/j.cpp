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

int main() {  _
  int n;
  cin >> n;
  if(n==1) {
    cout<<"idades corretas"<<endl;
    return 0;
  }
  n--;
  int a0, t0, a, t;
  cin >> a0 >> t0;
  bool printed = false;
  while (--n) {
    cin >> a >> t;
    if (a - t != a0 - t0) {
      cout<<"mentiu a idade"<<endl;
      printed=true;
      break;
    }
  }
  if(!printed) cout<<"idades corretas"<<endl;
  return 0;
}
