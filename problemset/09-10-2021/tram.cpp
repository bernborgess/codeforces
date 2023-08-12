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
  int n;  cin>>n;
  int maximum = 0, current=0;
  while(n--) {
    int in,out; cin>>out>>in;
    current=max(current-out,0);
    current+=in;
    if(current>maximum) maximum=current;
  }
  cout<<maximum<<endl;
  return 0;
}

