/**
 *    author:  bernborgess
 *    problem: d - 1649
 *    created: 06.March.2022 08:07:49
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
  int t;  cin>>t;
  int n,c;
  while(t--) {
    cin>>n>>c;
    vector<int>a(n);
    for(int&i:a)cin>>i;
    sort(all(a));

    if(a[0]!=1) {
      cout<<"No"<<endl;
      continue;
    }

    bool integral=true;
    int l=1;

    for(int i=1;i<n;i++) {
      for(int j=(upb(all(a),a[i]/(l+1))-a.begin()-1)
      ;j>=0;j--) {
        if(!binary_search(all(a), a[i]/a[j])) {
          integral=false;
          break;
        }
        if(a[i]/a[j]==(l+1)) {
          l++;
          j=min(j,(int)(upb(all(a),a[i]/(l+1))-a.begin()-1));
        } 
      }
      if(!integral) break;
    }
    

    cout<<(integral?"Yes":"No")<<endl;
  }
  return 0;
}

