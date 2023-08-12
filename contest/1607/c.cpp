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

const int MAX = 2e5+10;
vector<int> a(MAX);

int main() { _
  int t,n,d; cin>>t;
  while(t--) {
    cin>>n; 
    for(int i=0;i<n;i++) cin>>a[i];
    if(n<=1) {
      cout<<a[0]<<endl;
      continue;
    }
    sort(a.begin(),a.begin()+n);
    d=a[0];
    for(int i=1;i<n;i++) {
      d=max(d,a[i]-a[i-1]);
    } 
    cout<<d<<endl;
  }
  return 0;
}

