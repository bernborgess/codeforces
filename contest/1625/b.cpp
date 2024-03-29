/**
 *    author:  bernborgess
 *    problem: b - 1625
 *    created: 12.January.2022 09:16:28
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

const int MAX = 150010;
int last[MAX];
int dist[MAX];

int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    memset(last,-1,sizeof(last));
    memset(dist,INF,sizeof(dist));
    cin>>n;
    for(int i=0;i<n;i++) {
      int el; cin>>el;
      if(last[el]!=-1) {
        dist[el]=min(dist[el],i-last[el]);
      }
      last[el]=i;
    }

    int ans = INF;
    for(int i=0;i<MAX;i++) {
      ans=min(ans,dist[i]);
    }
    cout<<(ans!=INF?n-ans:-1)<<endl;
  }
  return 0;
}

