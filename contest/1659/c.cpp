/**
 *    author:  bernborgess
 *    problem: c - 1659
 *    created: 17.April.2022 13:27:56
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
#define rall(v) v.rbegin(), v.rend()
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


int main() { _
  int t;  cin>>t;
  int n,a,b;
  while(t--) {
    cin>>n>>a>>b;
    vector<ll>x(n);
    vector<ll>acc(n+1);

    //! Closed formula failing to optimize.
    ll all=0LL;
    for(ll&i:x)cin>>i;   
    for(int i=0;i<n;i++){
      acc[i+1]=acc[i]+x[i];
      all+=x[i];
    } 
    
    
    auto sum = [&] (int l,int r) {
      return acc[r]-(l>0?acc[l]:0);
    };

    ll ans=INF;
    for(int i=0;i<n-1;i++) {
      ans=min(ans,
        a*x[i] +
        b*(all-(n-i)*x[i])
      );
    }

    cout<<ans<<endl;
    
  }
  return 0;
}

