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

bool is_composite(int s) {
  bool composite = false;
  for (ll i = 2; i * i <= s; i++) {
    if (s % i == 0) {
      composite = true;
      break;
    }
  }
  return composite;
}

int main() { _
  int t;  cin >> t;
  int n;
  vector<int> a;
  while (t--) {
    cin >> n;
    a.resize(n);
    int sum = 0;
    bool found = false;
    for (int& el : a) {
      cin >> el;
      sum += el;
    }
    if (is_composite(sum)) {
      cout << n << endl;
      for (int i=1;i<=n;i++) cout << i << " ";
      cout << endl;
    } else {
      int idxImpar=-1;
      for(int i=0;i<n;i++) if(a[i]%2) {
        idxImpar=i; break;
      }
      cout<<n-1<<endl;
      for(int i=0;i<n;i++) if(i!=idxImpar) {
        cout<<i+1<<" ";
      } cout<<endl;
    }
  }
  return 0;
}
