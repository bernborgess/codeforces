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
  int n; cin>>n; n--;
  int groups = 1;
  char a,b; cin>>a>>b;
  char last=b;
  while(n--) {
    cin>>a>>b;
    if(a==last) groups++;
    last=b;
  }
  cout<<groups<<endl;
  return 0;
}

