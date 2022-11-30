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
  int n;
  cin >> n;

  int places[13];
  places[1] = 15;
  places[2] = 12;
  places[3] = 10;
  places[4] = 9;
  places[5] = 8;
  places[6] = 7;
  places[7] = 6;
  places[8] = 5;
  places[9] = 4;
  places[10] = 3;
  places[11] = 2;
  places[12] = 1;
  vector<int> tracks;
  int s = 0;
  for (int i = 1; i < 13; i++) {
    s += n / places[i];
    for (int j = 0; j < n / places[i]; j++) {
      tracks.push_back(i);
    }
    n -= places[i] * (n / places[i]);
    if (n == 0) break;
  }
  cout<<s<<endl;
  for(auto x : tracks) {
    cout<< x << " ";
  }
  cout<<endl;

  return 0;
}
