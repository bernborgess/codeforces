/**
 *    author:  bernborgess
 *    created: 22.November.2021 07:11:09
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

ll sum(ll x) {
  return x*(x+1)/2;
}

ll sumRange(ll a, ll b) {
  return ((b*(b+1))-(a*(a-1)))/2;
}

int main() {  _
  int t; cin>>t;
  ll k, x;
  while(t--) {
    cin>>k>>x;
    if(x>=k*k) {
      cout<<2*k-1<<endl;
      continue;
    } 
    /*
    
    #
    ##
    ###
    ##
    #

    */
    if(x>sum(k)) {
      ll aux = x-sum(k);
      ll l=1,r=k;
      while(l<r) {
        ll m = (l+r)/2;
        ll sm=sumRange(k-m,k-1);
       if(sm>=aux)  r=m;
        else        l=m+1;
      }
      cout<<k+l<<endl;
    } else {
      ll l=1,r=k;
      while(l<r) {
        ll m = (l+r)/2;
        ll sm=sum(m);
        if(sm>=x) r=m;
        else      l=m+1;
      }
      cout<<l<<endl;
    }
  }
  return 0;
}

/*
999999998
1608737403

1000000000          k
500000000500000000  sum(k)

814719387398776497  sum(k) + sumRange(608737403,k-1)
814719388007513899

923456790290039094 sum(k) + sumRange(k-l,k-1);

923456789987654321  x

ans: k+l;


1000000000000000000 sum(k) + sum(k-1)

*/

// 1000000000 923456789987654321

// 923456789987654321
// 374999999750000000
// 218750000624999999
// 30761718734375000

// 423456789487654321
// 500000000500000000