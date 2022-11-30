/**
 *    author:  bernborgess
 *    problem: c - 1650
 *    created: 08.March.2022 11:49:50
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
typedef tuple<int,int,int,bool> tiiib;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool weightSort(tiiib a, tiiib b) {
  return get<1>(a)<get<1>(b);
}

bool pointSort(tiiib a, tiiib b) {
  return get<0>(a)<get<0>(b);
}


int main() { _
  int t;  cin>>t;
  int n,m;
  while(t--) {
    cin>>n>>m;
    vector<tiiib>a(m);
    for(int i=0;i<m;i++) {
      cin>>get<0>(a[i])>>get<1>(a[i]);
      get<2>(a[i])=i+1;
      get<3>(a[i])=false;
    }
    sort(all(a),weightSort);
    ll w=0LL;
    for(int i=0;i<2*n;i++) {
      w+=get<1>(a[i]);
      get<3>(a[i])=true;
    }
    sort(all(a),pointSort);
    cout<<w<<endl;
    int l=0,r=m-1,out=0;
    while(out<n) {
      while(!get<3>(a[l]))l++;
      while(!get<3>(a[r]))r--;
      cout<<get<2>(a[l])<<' '<<get<2>(a[r])<<endl;
      l++,r--;
      out++;
    }
    cout<<endl;
  }
  return 0;
}

