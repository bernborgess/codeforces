/**
 *    author:  bernborgess
 *    problem: c - 1649
 *    created: 06.March.2022 07:41:46
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

typedef pair<vector<int>,vector<int>> pvv;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

map<int,pvv> mp;

ll sumVec(vector<int>&v) {
  sort(all(v));
  ll res=0,sum=0;
  for(int i=0;i<v.size();i++) {
    res+=(v[i]*(ll)i-sum);
    sum+=v[i];
  }
  return res;
}

int main() { _
  int n,m; cin>>n>>m;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++) {
    int clr; cin>>clr;
    mp[clr].fst.pbk(i);
    mp[clr].snd.pbk(j);
  }
  ll ans=0;
  for(auto clrs:mp) {
    ans+=sumVec(clrs.snd.fst);
    ans+=sumVec(clrs.snd.snd);
  }
  cout<<ans<<endl;
  return 0;
}

