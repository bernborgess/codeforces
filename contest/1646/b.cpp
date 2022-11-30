/**
 *    author:  bernborgess
 *    problem: b - 1646
 *    created: 04.March.2022 12:37:25
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
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    vector<int>a(n);
    for(int&i:a)cin>>i;
    sort(a.begin(),a.end());
    int l=1,r=n-1;
    ll sumL,sumR;
    sumL=a[0]+a[1];
    sumR=a[n-1];
    bool can=false;
    while(l<r) {
      if(sumL<sumR) {
        can=true;
        break;
      }
      l++,r--;
      sumL+=a[l];
      sumR+=a[r];
    }

    cout<<(can?"YES":"NO")<<endl;
  }
  return 0;
}

