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
  int t;  cin>>t;
  while(t--) {
    ll n;  cin>>n;
    if(n==0) cout<<"-1 1"<<endl;
    else if(n>0) cout<<-(n-1)<<" "<<n<<endl;
    else         cout<<n<<" "<<-(n-1)<<endl;
  }
  return 0;
}

