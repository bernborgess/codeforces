/**
 *    author:  bernborgess
 *    problem: c - 1629
 *    created: 22.January.2022 11:54:24
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

const int MAX=2e5+10;
vector<int> a;
map<int,pii> occ;// occ[i] => {#,fst}


int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    occ.clear();
    a.resize(n);
    for(int i=0;i<n;i++) {
      cin>>a[i];
      if(!(occ[a[i]].fst)) {
        occ[a[i]]={1,i};
      } else {
        occ[a[i]].fst++;
      }
    }

    int L=0,R=n;
    vector<int>ans;
    while(L<R) {
      int MEX=0;
      int idx=0;
      for(int i=0;i<=n;i++) if(!(occ[i].fst)) {
        MEX=i; break;
      } else {
        idx=max(idx,occ[i].snd);
      }

      if(MEX==0) {
        ans.insert(ans.end(), n-L, 0);
        break;
      }

      ans.pbk(MEX);
      for(int i=L;i<=idx;i++) if(occ[a[i]].fst>0) {
        occ[a[i]].fst--;

        if(occ[a[i]].snd<=idx) {
          for(int j=idx+1;j<n;j++) 
          if(a[i]==a[j]) {
            occ[a[i]].snd=j;
            break;
          }
          if(occ[a[i]].snd<=idx) {
            occ.erase(a[i]);
          }
        }
      }
      L=idx+1;
    }
    cout<<ans.size()<<endl;
    for(int i:ans)cout<<i<<' ';
    cout<<endl;
  }
  return 0;
}

