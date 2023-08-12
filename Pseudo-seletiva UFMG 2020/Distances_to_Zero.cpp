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
  vector<int> a(n,INF);
  bool found=false;
  int streak, numb;
  for(int i=0;i<n;i++) {
    cin>>numb; 
    if(!numb) {
      found=true;
      streak=1;
      a[i]=0;
    } else {
      a[i] = found?streak:INF;
      streak++;
    }
  }
  found=false;
  for(int i=n-1;i>=0;i--) {
    if(!a[i]) {
      found=true;
      streak=1;
    } else if(found&&streak<a[i]) {
      a[i]=streak;
      streak++;
    }
  }
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}

