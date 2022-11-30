/**
 *    author:  bernborgess
 *    problem: d_upsolve - 1625
 *    created: 12.January.2022 19:10:00
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
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int&i:a)cin>>i;
  // BRUTE FORCE, only for n<=30
  for(int on=n;on>0;on--) {
    int mask=(1<<on)-1;
    // cout<<mask<<endl;
    std::bitset<30> y(mask);
    std::cout << y << '\n';
  }
  return 0;
}

