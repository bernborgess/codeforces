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
  vector<int> a(n),h(n);
  int uniformChanges=0;
  for(int i=0;i<n;i++) cin>>h[i]>>a[i];
  for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(i!=j&&h[i]==a[j]) uniformChanges++;
  cout<<uniformChanges<<endl;
  return 0;
}

