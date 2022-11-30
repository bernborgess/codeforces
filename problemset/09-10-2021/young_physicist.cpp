#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



int main() { _
  int n; cin>>n;
  int sx=0,sy=0,sz=0;
  while(n--) {
    int x,y,z;
    cin>>x>>y>>z;
    sx+=x,sy+=y,sz+=z;
  }
  cout<<(sx||sy||sz?"NO":"YES")<<endl;
  return 0;
}

