/**
 *    author:  bernborgess
 *    problem: c_upsolve - 1625
 *    created: 12.January.2022 13:10:48
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

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


#ifndef TOP_DOWN

vector<int> d;
vector<int> a;
int MEM[501][500];

// go n segments, break at most k signs.
int solve(int n,int k) {
  if(n==0) return 0;
  if(MEM[n][k]!=-1) return MEM[n][k];
  int ans=INF;
  for(int m=0;(n-m-1)>=0 && (k-m)>=0; m++) {
    ans=min(ans,solve(n-m-1,k-m)+(d[n]-d[n-m-1])*a[n-m-1]);
  }
  return MEM[n][k]=ans;
}

#endif

int main() { _
  int n,l,k; cin>>n>>l>>k;
  d=vector<int> (n+1);
  a=vector<int> (n);
  for(int i=0;i<n;i++) cin>>d[i];
  d[n]=l;
  for(int i=0;i<n;i++) cin>>a[i];

  memset(MEM,-1,sizeof(MEM));
  cout<<solve(n,k)<<endl;

  // for(int i=0;i<=k;i++) solve(n,i);


  for(int j=0;j<=k;j++) {
  for(int i=0;i<=n;i++) {
    if(i) cout<<' ';
    cout<<MEM[i][j];
  }
  cout<<endl;
  }
  return 0;
}

