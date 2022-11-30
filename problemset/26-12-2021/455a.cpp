/**
 *    author:  bernborgess
 *    created: 26.December.2021 22:18:19
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
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5+10;
int v[MAX];
ll dp[MAX];

ll solve(ll x) {
  if(x>100000)    return 0;
  if(dp[x]!=-1) return dp[x];
  if(v[x]==0)   return solve(x+1);
  return dp[x]=max(v[x]*(ll)x+solve(x+2),solve(x+1));
} 


int main() { _
  memset(v,0,sizeof(v));
  int n,el;   cin>>n;
  while(n--) {cin>>el;v[el]++;}
  memset(dp,-1,sizeof(dp));
  cout<<solve(0)<<endl;
  return 0;
}
