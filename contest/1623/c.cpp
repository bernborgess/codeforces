/**
 *    author:  bernborgess
 *    created: 28.December.2021 11:43:45
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


// bool works(int x) {
//   memcpy(H,h,sizeof(ll)*n);
//   ll d;
//   for(int i=n-1;i>=0;i--) {
//     if(H[i]<x) return false;
//     if(i>=2) {
//       d=(min(H[i]-x,h[i]))/3;
//       H[i-1]+=d;
//       H[i-2]+=2*d;
//     }
//   }
//   return true;
// }
int n;

int main() { _
  int t;  cin>>t;
  while(t--) {
    cin>>n;
    vector<ll> h(n);
    ll m=LINF,M=0LL;
    for(int i=0;i<n;i++){ 
      cin>>h[i]; m=min(m,h[i]); M=max(M,h[i]);
    }

    auto works = [&](int x) {
      vector<ll> H=h;
      for(int i=n-1;i>=0;i--) {
        if(H[i]<x) return false;
        if(i>=2) {
          ll d=(min(H[i]-x,h[i]))/3;
          H[i-1]+=d;
          H[i-2]+=2*d;
        }
      }
      return true;
    };

    ll l=m,r=M+10;
    while(l<r) {
      ll m=(l+r+1)/2;
      if(works(m)) l=m;
      else         r=m-1;
    }
    cout<<l<<endl;
  }
  return 0;
}
