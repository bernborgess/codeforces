/**
 *    author:  bernborgess
 *    problem: 1353b - 28-02-2022
 *    created: 28.February.2022 22:42:04
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
  int t; cin>>t;
  while(t--) {
    int n,k; 
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int&i:a)cin>>i;
    for(int&i:b)cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ia=n-1,ib=n-1;
    ll sum=0LL;
    while(n--) {
      if(k&&a[ia]<b[ib]) {
        sum+=b[ib];
        ib--;
        k--;
      }else{
        sum+=a[ia];
        ia--;
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}

