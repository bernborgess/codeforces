/**
 *    author:  bernborgess
 *    problem: d - 1676
 *    created: 10.May.2022 21:42:58
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


int main() { _
  int t;  cin>>t;
  int n,m;
  while(t--) {
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(vector<int>&v:a)
    for(int&i:v)cin>>i;

    int ans = 0;
    
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) {
      int ss=a[i][j];
      for(int k=1;i-k>=0&&j-k>=0;k++)
        ss+=a[i-k][j-k];
      for(int k=1;i+k<n&&j+k<m;k++)
        ss+=a[i+k][j+k];
      for(int k=1;i-k>=0&&j+k<m;k++)
        ss+=a[i-k][j+k];
      for(int k=1;i+k<n&&j-k>=0;k++)
        ss+=a[i+k][j-k];
      ans=max(ans,ss);
    }
    cout<<ans<<endl;
  }
  return 0;
}

