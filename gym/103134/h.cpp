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

const int MAX = 1e5+10;
pii pass[MAX];

/**
 * RULES:
 * 1) No passenger will hear a joke more than once
 * 2) 5 minutes between jokes
 * 3) students in the bus at the same time share jokes
 * 4) No passenger stays more than 100 min
 *
 * ? Ex: pass[0] = {0,10}, pass[1] = {5,10}
 * ? The joke from min 0 will be told to pass[1].
 * 
 */

int main() {
  _;
  int n;  cin>>n;
  for(int i=0;i<n;i++) {
    //TODO understand the game
    cin>>pass[i].fst>>pass[i].snd;

  }
  return 0;
}
