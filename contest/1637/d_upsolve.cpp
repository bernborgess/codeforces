/**
 *    author:  bernborgess
 *    problem: d_upsolve - 1637
 *    created: 12.February.2022 19:31:38
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

const int MAX = 1e4+10;

int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    vector<int>a(n+1);
    vector<int>b(n+1);
    ll sumMin=0,sumMax=0,sumSqr=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) {
      if(a[i]>b[i]) swap(a[i],b[i]);
      sumSqr+=sqr(a[i])+sqr(b[i]);
      sumMin+=a[i];
      sumMax+=b[i];
    }

    vector<vector<bool>>dp(n+1,vector<bool>(MAX,false));
    dp[1][a[1]]=true;
    dp[1][b[1]]=true;
    for(int i=2;i<=n;i++) {
      for(int w=b[i];w<=sumMin;w++)
        dp[i][w]=dp[i-1][w-a[i]] or
                 dp[i-1][w-b[i]];
    }

    ll ans=sqr(sumMin)+sqr(sumMax);

    for(int w=0;w<=sumMax;w++)
    if(dp[n][w]) {
      ans=min(ans,sqr(sumMin+w)+sqr(sumMax-w));
    }
    cout<<sumSqr*(n-2)+ans<<endl;
  }
  return 0;
}

