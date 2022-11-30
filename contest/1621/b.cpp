/**
 *    author:  bernborgess
 *    problem: b - 1621
 *    created: 03.January.2022 11:45:58
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

struct tp {
  ll l,r,c;
};

int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    tp esq,dir,span;

    for(int i=0;i<n;i++) {
      ll l,r,c; cin>>l>>r>>c;
      if(!i) { esq=dir=span={l,r,c};}

      if(r-l>span.r-span.l||r-l==span.r-span.l&&c<span.c) {
        span={l,r,c};
      }
      if(l<esq.l||l==esq.l&&c<esq.c) {
        esq={l,r,c};
      }
      if(r>dir.r||r==dir.r&&c<dir.c) {
        dir={l,r,c};
      }

      if(span.r-span.l==dir.r-esq.l) {
        cout<<min(span.c,dir.c+esq.c)<<endl;
      }
      else {
        cout<<dir.c+esq.c<<endl;
      }
    }
  }
  return 0;
}

