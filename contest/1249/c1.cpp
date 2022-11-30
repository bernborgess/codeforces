/**
 *    author:  bernborgess
 *    problem: c1 - 1249
 *    created: 07.March.2022 18:54:20
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

void printTerBits(int x) {
  while(x>0) {
    cout<<x%3<<' ';
    x/=3;
  }
  cout<<endl;
}

int main() { _
  int q;  cin>>q;
  ll n,e,a;
  while(q--) {
    cin>>n;
    a=n;
    e=1;
    while(n>0) {
      if(n%3==2) {
        n++;
        a=e*n;
      }
      n/=3;
      e*=3;
    }
    cout<<a<<endl;   
  }
  return 0;
}

