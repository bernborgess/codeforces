/**
 *    author:  bernborgess
 *    problem: b1 - 1249
 *    created: 07.March.2022 17:07:05
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
  int q;  cin>>q;
  int n;
  while(q--) {
    cin>>n;
    vector<int>p(n),b(n),f(n),r(n,-1);
    for(int&i:p){cin>>i;i--;}
    iota(all(b),0);
    int ready=0;

    for(int i=1;ready<n;i++)
    if(i&1){
      for(int j=0;j<n;j++) {
        f[p[j]]=b[j];
        if(r[p[j]]==-1&&f[p[j]]==p[j]) {
          ready++;
          r[p[j]]=i;
        }
      }
    } else {
      for(int j=0;j<n;j++) {
        b[p[j]]=f[j];
        if(r[p[j]]==-1&&b[p[j]]==p[j]) {
          ready++;
          r[p[j]]=i;
        }
      }
    }

    for(int x:r)
      cout<<x<<' ';
    cout<<endl;

    
  }
  return 0;
}

