/**
 *    author:  bernborgess
 *    problem: b_upsolve - 1637
 *    created: 13.February.2022 21:24:23
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

//? What does happen after replacing a segment of 
//? length greater than 1 with segments of length 1?

//! Breaking all segments to size 1 doesn't affect
//! the final sum (might as well increase it!)

//? The cost of the array b1,b2,…,bk equals to 
//? k+∑(i=1 to k) mex({bi}).

//! cost = k + #nonzeroes.

//? How many subsegments are there? We need the value of
//? all subsegments added. 

//! TOTAL LENGTH OF ALL SUBSEGMENTS:
//! SUM(i=1,N) i*(N-i+1) = N(N+1)(N+2)/6

//! NUMBER OF SUBSEGMENTS WHERE a[i] IS PRESENT:
//! i(N-i+1)


int main() { _
  int t;  cin>>t;
  int a;
  ll n;
  while(t--) {
    cin>>n;
    //? Sum of cardinalities of all subsegments
    ll ans=n*(n+1)*(n+2)/6;

    //? Contribution of each 0
    for(int i=1;i<=n;i++) {
      cin>>a;
      if(!a)
        ans+=i*(n-i+1);
    }
    cout<<ans<<endl;
  }
  return 0;
}

