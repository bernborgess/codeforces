/**
 *    author:  bernborgess
 *    problem: c - 1637
 *    created: 12.February.2022 13:19:39
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
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    int e;
    if(n==3) {
      cin>>e;
      cin>>e;
      cout<<(e&1?-1:e/2)<<endl;
      cin>>e;
      continue;
    }
    bool only1=true;
    ll ans=0;
    cin>>e;
    for(int i=1;i<n-1;i++) {
      cin>>e;
      if(e!=1) only1=false;
      ans+=(e+1)/2;
    }
    cin>>e;
    cout<<(only1?-1:ans)<<endl;
  }
  return 0;
}

