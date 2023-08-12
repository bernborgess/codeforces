/**
 *    author:  bernborgess
 *    problem: e - 1249
 *    created: 07.March.2022 19:54:10
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
  int n,c,e;
  cin>>n>>c;
  vector<ll> a(n),b(n),t(n+1);
  a[0]=0;b[0]=0;
  for(int i=1;i<n;i++) {
    cin>>e;
    a[i]=e+a[i-1];
  }
  for(int i=1;i<n;i++) {
    cin>>e;
    b[i]=e+b[i-1];
  } 

  auto sumV = [&](int l,int r,bool o=false) -> ll {
    if(r<l) return 0LL;
    if(l==0) return o?a[r-1]:b[r-1];
    return o?(a[r-1]-a[l-1]):(b[r-1]-b[l-1]);
  };

  t[1]=0;
  for(int i=2;i<=n;i++) {
    t[i]=INF;
    for(int j=1;j<i;j++) {
      // stairs
      t[i]=min(t[i],sumV(j,i,true)+t[j]);
      // elevator
      t[i]=min(t[i],c+sumV(j,i)+t[j]);
    }
  }
  for(int i=1;i<=n;i++) {
    cout<<t[i]<<' ';
  } cout<<endl;

  return 0;
}

