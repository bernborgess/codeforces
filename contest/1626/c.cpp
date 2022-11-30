/**
 *    author:  bernborgess
 *    problem: c - 1626
 *    created: 16.January.2022 11:57:09
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


int main() { _
  int t;  cin>>t;
  int n;
  vector<int> h,k;
  while(t--) {
    cin>>n; h=vector<int>(n),k=vector<int>(n);
    for(int&i:k)cin>>i;
    for(int&i:h)cin>>i;

    vector<int> DP(100);
    DP[0]=h[0];
    for(int i=1;i<n;i++) {
      DP[i]=-1;
      for(int j=i-1;j>=0 && k[j]>k[i]-h[i]; j--) {
        if(DP[j]>h[i]-(k[i]-k[j])) { // keep up
          DP[i]=DP[j]+(k[i]-k[j]);
          DP[j]=0;
          break;
        } 
        DP[j]=0;
      }
      if(DP[i]==-1) {
        DP[i]=h[i];
      }
    }
    ll ans=0;
    for(int i=0;i<n;i++) {
      ans+=DP[i]*(ll)(DP[i]+1)/2;
    } 
    cout<<ans<<endl;
    
  }
  return 0;
}

