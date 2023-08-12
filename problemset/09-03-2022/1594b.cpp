/**
 *    author:  bernborgess
 *    problem: 1594b - 09-03-2022
 *    created: 10.March.2022 00:04:46
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound // iterator for first el not less than x
#define upb upper_bound // iterator for first el bigger than x
#define mkp make_pair
#define mkt make_tuple
#define uset unordered_set
#define umap unordered_map
#define bs bitset
#define sqr(a) (a)*(a)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define debug(x) cout << #x << " = " << x << endl

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MOD = 1e9+7;

int main() { _
  int t,n,k; cin>>t;
  ll a,b;
  while(t--) {
    cin>>n>>k;
    a=0;
    b=1;
    for(int i=0;i<32;i++,b=(b*n)%MOD)
    if(k&(1<<i))
      a=(a+b)%MOD;
    
    cout<<a<<endl;
  }
  return 0;
}

