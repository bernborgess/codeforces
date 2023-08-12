/**
 *    author:  bernborgess
 *    problem: a - 1642
 *    created: 23.February.2022 09:53:36
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool cmd(pii a,pii b) {
  return a.snd>b.snd;
}

int main() { _
  int t;  cin>>t;
  pii pts[3];
  while(t--) {
 
    for(int i=0;i<3;i++)
      cin>>pts[i].fst>>pts[i].snd;
    sort(begin(pts),begin(pts)+3,cmd);

    cout<<((pts[0].snd>pts[1].snd)?0:abs(pts[0].fst-pts[1].fst))<<endl;

  }
  return 0;
}

