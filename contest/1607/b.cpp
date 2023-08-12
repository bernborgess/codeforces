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
  int t; cin>>t;
  ll x,n;
  while(t--) {
    cin>>x>>n;
    ll temp = x;
    for(ll i=n-n%4+1;i<=n;i++) 
      x+=(x%2?i:-i);
    cout<<x<<endl;
  }
  return 0;
}

