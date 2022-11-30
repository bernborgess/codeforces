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
  int t,n,m; cin>>t;
  int x,y,maxX,minX,maxY,minY;
  int opos;
  string s;
  while (t--) {
    cin>>n>>m>>s; x=0,y=0,maxX=0,maxY=0,minX=0,minY=0; opos=0;
    for(int i=0;i<(int)s.size();i++) {
      if(s[i]=='R') x++;
      if(s[i]=='L') x--;
      if(s[i]=='U') y--;
      if(s[i]=='D') y++;

      maxX=max(maxX,x);
      minX=min(minX,x);
      maxY=max(maxY,y);
      minY=min(minY,y);

      if(maxX-minX>=m) {
        opos=1;
        break;
      }
      if(maxY-minY>=n) {
        opos=2;
        break;
      }
    }
    if(opos) {
      cout<<n-y-(opos==1)+1<<" "<<m-x-(opos==2)+1<<endl;
    } else {
      cout<<n-maxY<<" "<<m-maxX<<endl;
    }
  }
  return 0;
}

