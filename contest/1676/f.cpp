/**
 *    author:  bernborgess
 *    problem: f - 1676
 *    created: 11.May.2022 10:57:17
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
#define rall(v) v.rbegin(), v.rend()
#define debug(x) cout << #x << " = " << x << endl

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
  int t;  cin>>t;
  int n,k;
  while(t--) {
    cin>>n>>k;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
      int e; 
      cin>>e;
      mp[e]++;
    }

    int L,R,l,r;
    R=l=r=0;L=1;
    bool streak=false;
    for(pair<int,int>p:mp) {

      if(!streak) {
        if(p.snd >= k) {
          streak=true;
          l=r=p.fst;
        }
        continue;
      }

      // motivos pra quebrar streak:
      // 1. p.snd < k
      // 2. r+1 != p.fst
      if(p.snd>=k&&p.fst==r+1) {
        r=p.fst;
      } else { //! quebrou
        if(R-L<r-l) 
          R=r,L=l;
        
        if(p.snd>=k) 
          l=r=p.fst;
        else
          streak=false;
          
      }
    }

    if(streak && R-L<r-l) 
      R=r,L=l;

    if(R-L==-1) cout<<-1<<endl;
    else        cout<<L<<' '<<R<<endl;
  }
  return 0;
}

