/**
 *    author:  bernborgess
 *    problem: b - 1637
 *    created: 12.February.2022 11:40:21
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
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

const int MAX = 128;
bool has[MAX];
int n;
int a[MAX];
// vector<int>a;

int MEMX[MAX][MAX];
int MEX(int l,int r) {
  if(MEMX[l][r]!=-1) return MEMX[l][r];
  memset(has,0,sizeof(has));
  for(int i=l;i<=r;i++) {
    if(a[i]>=MAX) continue;
    has[a[i]]=1;
  }
  for(int i=0;i<n;i++)
  if(!has[i]) return MEMX[l][r]=i;
  return MEMX[l][r]=n;  
}

int MEM[MAX][MAX];
int solve(int fst,int idx) {
  if(MEM[fst][idx]!=-1) return MEM[fst][idx];
  int& ans=MEM[fst][idx]=0;

  if(idx==fst) {
    if(a[idx]!=0) return ans=1;
    return ans=2;
  }

  for(int i=idx-1;i>=fst;i--) {
    int mex=MEX(i+1,idx);
    ans=max(ans,
      solve(fst,i)+1+mex
    );
  }
  return ans;
}

void testcase() {
  cin>>n;
  // a.resize(n);
  memset(MEM,-1,sizeof(MEM));
  memset(MEMX,-1,sizeof(MEMX));
  // for(int&i:a)cin>>i;
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }
  ll ans=0;
  for(int l=0;l<n;l++) 
  for(int r=l;r<n;r++) 
      ans+=solve(l,r);
  
  cout<<ans<<endl;
}

int main() { _
  int t;  cin>>t;
  while(t--) {
    testcase();
  }
  return 0;
}

