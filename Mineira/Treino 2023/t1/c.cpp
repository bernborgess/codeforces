#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define all(x) begin(x),end(x)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
  ll n,m;
  cin>>n>>m;
  vector<int> s(n);
  for(int&i:s)cin>>i;
  sort(all(s));
  vector<ll> sums(n+1);
  sums[0]=0LL;
  for(int i=0;i<n;i++)
    sums[i+1]=sums[i]+s[i];
  
  ll q;
  ll p = n;

  while(m--) {
    cin>>q;
    for(int i=p;i>0;i--) {
      if(s[i-1]>=q) {
        s[i-1]=q;
        p--;
      }
      else {
        break;
      }
    }
    ll ans = sums[p] + (n-p)*q;
    cout<<ans<<endl;
  }
  return 0;
}

