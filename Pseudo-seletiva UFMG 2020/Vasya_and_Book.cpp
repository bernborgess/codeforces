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
  int t;  cin>>t;
  while(t--) {
    int n,x,y,d; cin>>n>>x>>y>>d;
    if(x%d==y%d)
      cout<<abs(x-y)/d<<endl;
    else if(y%d==1||n%d==y%d) {
      if(y%d==1&&n%d==y%d)  cout<<(min(n-y+n-x,y+x)/d)<<endl;
      else if(y%d==1)       cout<<((y+x)/d)<<endl;
      else                cout<<((n-y+n-x)/d)<<endl;          
    }
    else 
     cout<<-1<<endl;
  }
  return 0;
}

