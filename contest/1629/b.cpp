/**
 *    author:  bernborgess
 *    problem: b - 1629
 *    created: 22.January.2022 11:42:41
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
  int l,r,k;
  while(t--) {
    cin>>l>>r>>k;
    if(l==r) {
      if(l==1) cout<<"NO"<<endl;
      else     cout<<"YES"<<endl;
      continue;
    }
    int need;
    if(l%2==0) {
      if(r%2==0) {
        // e e
        need=(r-l)/2;
      } else {
        // e o
        need=(r-l+1)/2;
      }
    } else {
      if(r%2==0) {
        // o e
        need=(r-l+1)/2;
      } else {
        // o o
        need=(r-l)/2+1;
      }
    }
    cout<<(need<=k?"YES":"NO")<<endl;
  }
  return 0;
}

