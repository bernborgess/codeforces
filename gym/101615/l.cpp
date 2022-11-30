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

int k,p,x;

double costByPainters(int m) {
  double cost = (double)x*m + (double)p*(k/(double)m);
  return cost;
}

int main() { _
  cin>>k>>p>>x;
  double m = sqrt(p*k/(double)x);
  double cost = min(costByPainters(floor(m)),costByPainters(ceil(m)));
  cout<<fixed<<setprecision(3)<<cost<<endl;
  return 0;
}

