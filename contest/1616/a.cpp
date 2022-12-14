/**
 *    author:  bernborgess
 *    problem: a - 1616
 *    created: 29.December.2021 13:44:37
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
  int t; cin>>t;
  int val[110];
  int n,el;
  while(t--) {
    cin>>n; memset(val,0,sizeof(val));
    for(int i=0;i<n;i++) {
      cin>>el; val[abs(el)]++;
    }
    int ans=!!val[0];
    for(int i=1;i<=100;i++) {
      ans+=(val[i]>=2?2:val[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}

