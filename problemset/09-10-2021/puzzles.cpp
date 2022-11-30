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
  int n,m; cin>>n>>m;
  vector<int> a(m);
  int minDiff=INF;
  for(int i=0;i<m;i++) cin>>a[i];
  sort(a.begin(),a.end());
  for(int i=0;i<=m-n;i++) {
    int maxL=0,minL=INF;
    for(int j=i;j<i+n;j++) {
      maxL=max(maxL,a[j]);
      minL=min(minL,a[j]);
    }
    minDiff=min(minDiff,maxL-minL);
  }
  cout<<minDiff<<endl;
  return 0;
}

