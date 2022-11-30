/**
 *    author:  bernborgess
 *    problem: c - 1654
 *    created: 20.March.2022 18:55:42
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
#define big(x) (*--x.end())

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
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    ll sum=0LL;
    multiset<ll> draw,split;
    for(int i=0;i<n;i++) {
      ll e; cin>>e;
      sum+=e;
      draw.insert(e);
    }
    split.insert(sum);

    while(!split.empty()) {
      ll e = big(split);

      if(big(draw)>big(split)) {
        break;
      }
      split.erase(--split.end());

      if(draw.find(e)!=draw.end()) {
        draw.erase(draw.find(e));
      } else {
        split.insert(e/2);
        split.insert((e+1)/2);
      }
      
    }

    cout<<(draw.empty()?"YES":"NO")<<endl;

  }
  return 0;
}

