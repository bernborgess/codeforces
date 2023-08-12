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
  int maxS=0,maxI=-1,minS=110,minI=-1;
  for(int i=0;i<n;i++) {
    int temp; cin>>temp;
    if(temp>maxS)
      maxS=temp, maxI=i;
    if(temp<=minS)
      minS=temp, minI=i;
  }
  cout<<(maxI+n-minI-1-(minI<maxI))<<endl;
  return 0;
}

