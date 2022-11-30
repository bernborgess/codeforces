/**
 *    author:  bernborgess
 *    problem: e - 1189
 *    created: 16.March.2022 17:04:55
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
/*

Aprendemos: Viu algo como (a+b)(a²+b²) ?
  tenta multiplicar por (a-b):
  (a-b)(a+b) (a²+b²)
  (a²-b²) (a²+b²)
  a⁴ - b⁴

*/

int main() { _
  ll n,p,k;
  cin>>n>>p>>k;
  vector<ll>a(n);
  for(ll&i:a)cin>>i;

  return 0;
}

