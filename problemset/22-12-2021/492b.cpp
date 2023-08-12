/**
 *    author:  bernborgess
 *    created: 22.December.2021 17:24:49
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


int main() { _
  int n,l; cin>>n>>l;
  vector<int> a(n);
  for(int& i:a) cin>>i;
  sort(a.begin(),a.end());
  int maxDiff=0;
  for(int i=1;i<n;i++) {
    maxDiff=max(maxDiff,abs(a[i]-a[i-1]));
  }
  cout<<fixed<<setprecision(10)<<
  max({a[0]/1.0,maxDiff/2.0,l-a[n-1]/1.0})<<endl;
  return 0;
}

