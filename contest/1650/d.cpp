/**
 *    author:  bernborgess
 *    problem: d - 1650
 *    created: 08.March.2022 12:11:09
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
    vector<int>a(n),r(n);
    for(int&i:a)cin>>i;
    int p=n,l,k,c;

    l=0; c=0;
    while(a[l]!=p) l++;
    r[n-1]=l+1;
    p--;
    
    while(p>0) {
      c=0;
      k=(l+1)%n;
      while(a[k]!=p) {
        if(a[k]<p) c++;
        k=(k+1)%n;
      }
      r[p-1]=c+1;
      p--;
      l=k;
    }
    for(int i=0;i<n;i++) {
      cout<<r[i]%(i+1)<<' ';
    } cout<<endl;
    
  }
  return 0;
}

