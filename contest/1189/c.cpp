/**
 *    author:  bernborgess
 *    problem: c - 1189
 *    created: 16.March.2022 16:27:47
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


vector<int> v;
typedef pii segtype; // {last_sum,pts}
vector<segtype> seg;

segtype neutral = mkp(0,0);
#define base_el(x) mkp(x,0)

segtype combine(segtype a,segtype b) {
  return mkp((a.fst+b.fst)%10,
    a.snd+b.snd+!!((a.fst+b.fst)/10)
  );
}

segtype build(int p,int l,int r) {
  if(l==r) return seg[p]=base_el(v[l]);
  int m=(l+r)/2;

  segtype x = build(2*p,l,m);
  segtype y = build(2*p+1,m+1,r);

  return seg[p]=combine(x,y);
}

segtype query(int a,int b,int p,int l,int r) {
  if(b<l||r<a) return neutral;
  if(a<=l&&r<=b) return seg[p];
  int m=(l+r)/2;
  return combine(
    query(a,b,2*p,l,m),
    query(a,b,2*p+1,m+1,r)
  );
}


int main() { _
  int n,q;
  cin>>n;
  v=vector<int>(n);
  seg=vector<segtype>(4*n);
  for(int&i:v)cin>>i;
  cin>>q;
  build(1,0,n-1);
  while(q--) {
    // query
    int l,r; cin>>l>>r; l--,r--;
    segtype ans = query(l,r,1,0,n-1);
    cout<<ans.snd<<endl;
  }
  return 0;
}


