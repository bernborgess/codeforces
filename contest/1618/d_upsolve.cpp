/**
 *    author:  bernborgess
 *    problem: d_upsolve - 1618
 *    created: 10.March.2022 10:51:08
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

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,bool> pib;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
  int t;  cin>>t;
  int n,k,i;
  while(t--) {
    cin>>n>>k;
    vector<pib>a(n,{0,true});
    for(pib&i:a)cin>>i.fst;
    sort(all(a));

    // use m/M
    int l=0,r=1;
    while(k) {
      while((a[l].fst==a[r].fst||!a[r].snd)&&r<n)r++;
      if(r>=n) break;
      a[l].snd=false;
      a[r].snd=false;
      l=r+1;
      while(!a[l].snd&&l<n)l++;
      if(l>=n-1) break;
      r=l+1;
      k--;
    }

    cout<<k<<endl;

    continue;

    for(int i=0;i<n-1&&k;i++)
    if(a[i].fst==a[i+1].fst) {
      a[i].snd=false;
      a[i+1].snd=false;
      k--; i++;
    }

    // divide 



    // ll score=0;
    // i=n-1;
    // for(;i>=0&&k;k--,i-=2) {
    //   score+=a[i].fst/a[i-1].fst;
    // }
    // while(i>=0) {
    //   score+=a[i].fst;
    //   i--;
    // }
    // cout<<score<<endl;    
  }
  return 0;
}

