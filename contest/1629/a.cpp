/**
 *    author:  bernborgess
 *    problem: a - 1629
 *    created: 22.January.2022 11:20:20
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
  int n,k;
  vector<pii> ab;
  while(t--) {
    cin>>n>>k;
    ab.resize(n);
    for(int i=0;i<n;i++) cin>>ab[i].fst;
    for(int i=0;i<n;i++) cin>>ab[i].snd;

    sort(ab.begin(),ab.end());

    for(int i=0;i<n;i++) {
      if(k<ab[i].fst) break;
      k+=ab[i].snd;
    } 
    cout<<k<<endl;
  }
  return 0;
}

