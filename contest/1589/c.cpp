/**
 *    author:  bernborgess
 *    created: 21.November.2021 14:47:44
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

const int MAX = 110;
vector<int> a(MAX);
vector<int> b(MAX);

int main() { _
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    for(int i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++)  cin>>b[i];
    sort(a.begin(),a.begin()+n);
    sort(b.begin(),b.begin()+n);
    bool possible=true;
    for(int i=0;i<n;i++) {
      if(a[i]==b[i]) continue;
      if(a[i]+1==b[i]) continue;
      possible=false;
      break;
    }
    cout<<(possible?"YES":"NO")<<endl;
  }
  return 0;
}

