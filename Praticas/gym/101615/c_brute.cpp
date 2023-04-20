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


ll sum_of_factors(ll l) {
  ll ans=0;
  for(ll i = 1; i <= l; i++)
      if(!(l%i)) 
        ans+=i;
  return ans;
}

int main() { _
  ll a,b; cin>>a>>b;
  ll ans = 0;
  for(ll i=a;i<=b;i++) {
    ans+=sum_of_factors(i);
  }
  cout<<ans<<endl;
  return 0;
}

