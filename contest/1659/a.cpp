/**
 *    author:  bernborgess
 *    problem: a - 1659
 *    created: 17.April.2022 11:06:03
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
  int n,r,b;
  while(t--) {
    cin>>n>>r>>b;
    int am = 1;
    while(r>(am)*(b+1)) {
      am++;
    }

    bool deg =false;

    while(r>0) {
      int c = max(1,(deg?am-1:am));

      while(r>0&&c>0) {
        cout<<'R';
        r--;c--;
      }

      if(b>0) {
        cout<<'B';
        b--;
      }
      deg|=(r<=(am-1)*(b+1));
    }
    cout<<endl;
  }
  return 0;
}

