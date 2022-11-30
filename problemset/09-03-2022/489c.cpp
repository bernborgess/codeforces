/**
 *    author:  bernborgess
 *    problem: 489c - 09-03-2022
 *    created: 09.March.2022 20:26:21
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


int main() { _
  int m,s,S;
  cin>>m>>s;
  S=s;
  if(m==1 && s==0) {
    cout<<0<<' '<<0<<endl;
    return 0;
  }
  if(9*m<s || s==0) {
    cout<<-1<<' '<<-1<<endl;
    return 0;
  }
  s--;

  string n="1",N="1";
  while(n.size()<m) {
    n.pbk('0');
    N.pbk('0');
  }

  if(!s) {
    cout<<n<<' '<<N<<endl;
    return 0;
  }

  for(int i=n.size()-1;0<=i;i--) {
    if(!i)s++;
    n[i]='0'+min(9,s);
    s-=min(9,s);
    if(!s) break;
  }

  for(int i=0;i<N.size();i++) {
    N[i]='0'+min(9,S);
    S-=min(9,S);
    if(!S) break;
  }


  cout<<n<<' '<<N<<endl;
  return 0;
}

