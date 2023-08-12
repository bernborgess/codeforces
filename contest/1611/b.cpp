/**
 *    author:  bernborgess
 *    created: 25.November.2021 11:41:25
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
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
  int t; cin>>t;
  int a,b,ans;
  while(t--) {
    cin>>a>>b;
    ans=0;
    if(a<b) swap(a,b);
    a=min((ll)a,3LL*b);
    if(a<=1) {
      cout<<0<<endl;
      continue;
    }
    int mov = (a-b)/2;
    ans+=mov;
    a-=3*mov;
    b-=mov;
    ans+=min(a,b)/2;
    cout<<ans<<endl;
  }
  return 0;
}

