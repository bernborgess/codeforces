#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



int main() { _
  int n; 
  cin>>n;
  // n! = n(n-1)...3*2*1
  // log(n!) = log(n) + log(n-1) + ... + log(3) + log(2) + log(1)
  double logFatorial = 0;
  for(int i=1;i<=n;i++) {
    logFatorial += log10(i);
  }
  cout<<floor(logFatorial)+1<<endl;
  return 0;
}

