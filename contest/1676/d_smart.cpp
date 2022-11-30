/**
 *    author:  bernborgess
 *    problem: d_smart - 1676
 *    created: 11.May.2022 08:36:38
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

    //? Diagonal principal
    vector<int>dp(n+m);
    for(int k=-n+1;k<m;k++) {
      dp[k+n-1]=0;
      for(int i=(k<0?-k:0),j=(k<0?0:k);i<n&&j<m;i++,j++) {
        dp[k+n-1]+=a[i][j];
      }
    }

    //? Diagonal secundaria
    vector<int>ds(n+m);
    for(int k=0;k<m+n;k++) {
      ds[k]=0;
      for(int i=(k>m-1?k-m+1:0),j=min(k,m-1);i<n&&j>=0;i++,j--) {
        ds[k]+=a[i][j];
      }
    }

    int ans = 0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) {
      ans=max(ans,dp[j-i+n-1]+ds[j+i]-a[i][j]);
    }
    cout<<ans<<endl;
    
  }
  return 0;
}

