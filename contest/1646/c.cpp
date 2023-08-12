/**
 *    author:  bernborgess
 *    problem: c - 1646
 *    created: 04.March.2022 12:43:11
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

vector<ll> p;

const ll MAX = 1e12;

// minimum amount of coins to get this value
char * DP = (char*) malloc(MAX*sizeof(char));

int main() {
  _
  int t,k;  cin>>t;
  ll n=1,i=1; 
  while(n<=1e13) {
    n*=i;
    i++;
    p.pbk(n);
  }
  n=4;
  while(n<=1e13) {
    p.pbk(n);
    n*=2;
  }

  sort(all(p));
 

  while(t--) {
    cin>>n;
    cout<<(int)DP[n]<<endl;
  }

  return 0;
}

