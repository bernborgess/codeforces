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
  int n,t; cin>>n;
  int a[110];
  for(int i=1;i<=n;i++) {
    cin>>t; a[t]=i;
  }
  for(int i=1;i<=n;i++) {
    cout<<a[i]<<" ";
  } cout<<endl;
  return 0;
}

