/**
 *    author:  bernborgess
 *    problem: b - 1680
 *    created: 13.May.2022 15:24:09
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


int main() { _
  int t;  cin>>t;
  int n,m;
  while(t--) {
    cin>>n>>m;
    int lim=-1;
    bool can=true;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) {
      char el; cin>>el;
      if(el=='E') continue;
      if(lim==-1) lim=j;
      else if(j<lim) can=false;
    }
    cout<<(can?"YES":"NO")<<endl;
  }
  return 0;
}

