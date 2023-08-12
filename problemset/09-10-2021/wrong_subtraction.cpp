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

/**
 * ? "SUBTRACTION"
 * ? 1) if the last digit of the number is non-zero, 
 * ? she decreases the number by one;
 * ? 2) if the last digit of the number is zero, 
 * ? she divides the number by 10 
 * ? (i.e. removes the last digit).
 */

ll sub(ll n) {
  return n%10?n-1:n/10;
}

int main() { _
  ll n,k;  cin>>n>>k;
  while(k--)
    n=sub(n);
  cout<<n<<endl;
  return 0;
}

