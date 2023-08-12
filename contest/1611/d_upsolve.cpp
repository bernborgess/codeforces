/**
 *    author:  bernborgess
 *    problem: d_upsolve - 1611
 *    created: 12.January.2022 14:48:22
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define lob lower_bound // iterator for first el not less than x
#define upb upper_bound // iterator for first el bigger than x
#define uset unordered_set
#define mkp make_pair
#define pbk push_back
#define mkt make_tuple
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

const int MAX = 2e5+10;
int b[MAX];
int p[MAX];
int w[MAX];

int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    for(int i=0;i<n;i++){ cin>>b[i]; b[i]--; }
    for(int i=0;i<n;i++){ cin>>p[i]; p[i]--; }

    bool possible=true;
    memset(w,0,n*sizeof(int));
    for(int i=0;i<n;i++) {
      if(!w[b[p[i]]]&&b[p[i]]!=p[i])  {possible=false;break;}
      w[p[i]]=1;
    }
  
    if(!possible) {cout<<-1<<endl; continue;}

    w[p[0]]=0;
    ll now=1LL;
    for(int i=1;i<n;i++) w[p[i]] = now++;
    for(int i=0;i<n;i++) cout<<(i?" ":"")<<w[i]-w[b[i]];  cout<<endl;
  }
  return 0;
}

