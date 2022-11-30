/**
 *    author:  bernborgess
 *    problem: c_upsolve - 1646
 *    created: 04.March.2022 14:43:21
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

vector<ll> p;//? powerful
vector<ll> s;//? prefix sum (exclusive)

void build_ps();

ll getK(ll n,int x) {
  if(s[x]<n)
    return INF;
  if(x==0) 
    return n;
  if(p[x]>n)
    return getK(n,x-1);
  if(s[x-1]<n)
    return 1+getK(n-p[x],x-1);
  return min(
    1+getK(n-p[x],x-1),
    getK(n,x-1)
  );
}

int main() { _
  build_ps();
  //! BRUTEFORCE
  int t,k;  cin>>t;
  ll n;
  while(t--) {
    cin>>n;
    cout<<getK(n,p.size()-1)<<endl;
  }
  return 0;
}

void build_ps() {
  ll n=1,i=1;  
  while(n<=1e12) {
    n*=i;
    i++;
    p.pbk(n);
  }
  n=4;
  while(n<=1e12) {
    p.pbk(n);
    n*=2;
  }
  sort(all(p));
  p.pbk(LINF);
  s.pbk(p[0]);
  for(int i=1;i<p.size();i++) {
    s.pbk(s.back()+p[i]);
  }
}