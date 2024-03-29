/**
 *    author:  bernborgess
 *    problem: 1360b - 02-03-2022
 *    created: 02.March.2022 14:04:07
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


int main() { _
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    vector<int>s(n);
    for(int&i:s)cin>>i;
    sort(s.begin(),s.end());
    int m=1;
    for(int i=2;i<n;i++) 
    if(s[i]-s[i-1]<s[m]-s[m-1]) {
      m=i;
    }
    cout<<s[m]-s[m-1]<<endl;
  }
  return 0;
}

