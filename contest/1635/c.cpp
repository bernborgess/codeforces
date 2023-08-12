/**
 *    author:  bernborgess
 *    problem: c - 1635
 *    created: 20.February.2022 12:01:37
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
    vector<ll>a(n);
    for(ll&i:a)cin>>i;
    if(a[n-2]>a[n-1]) {
      cout<<-1<<endl;
      continue;
    }
    if(a[n-1]<0) {
      bool fine=true;
      for(int i=0;i<n-1;i++) {
        if(a[i]>a[i+1]) fine=false;
      }
      cout<<(fine?0:-1)<<endl;
      continue;
    }

    cout<<n-2<<endl;
    for(int i=1;i<=n-2;i++) {
      cout<<i<<' '<<n-1<<' '<<n<<endl;
    }

  }
  return 0;
}

