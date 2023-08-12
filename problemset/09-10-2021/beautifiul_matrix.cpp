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
  int x,y;
  for(int i=1;i<=5;i++) {
    for(int j=1;j<=5;j++) {
      int temp; cin>>temp;
      if(temp==1) 
        x=j, y=i;
    }
  }
  cout<<abs(x-3)+abs(y-3)<<endl;
  return 0;
}

