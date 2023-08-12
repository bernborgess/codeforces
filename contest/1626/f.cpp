/**
 *    author:  bernborgess
 *    problem: f - 1626
 *    created: 16.January.2022 13:33:50
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

const int MOD = 998244353;

int rand(int a,int b) {
  return rand()%(b-a+1)+a;
}

int main(int argc,char** argv) { _

  srand(atoi(argv[1]));
  int n,a0,x,y,k;
  cin>>n>>a0>>x>>y>>k;
  vector<int> a(n);
  for(int i=1;i<n;i++) {
    a[i]=(a[i-1]*x+y)%MOD;
  }

  long long ans = 0; 
  // create a 64-bit signed variable which is initially equal to 0
  for(int i = 1; i <= k; i++) {
    int idx = rand(0, n - 1); 
    // generate a random integer between 0 and n - 1, both inclusive
    // each integer from 0 to n - 1 has the same probability of being chosen
    ans += a[idx];
    a[idx] -= (a[idx]%i);
  }
  cout<<ans<<endl;
  return 0;
}

