/**
 *    author:  bernborgess
 *    problem: c - 1634
 *    created: 06.February.2022 12:24:01
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

const int MAX = 512;




int main() { _
  int t;  cin>>t;
  int n,k;
  while(t--) {
    cin>>n>>k;
    if(k==1) {
      cout<<"YES"<<endl;
      for(int i=1;i<=n;i++) cout<<i<<endl;
      continue;
    }
    if(n&1) {cout<<"NO"<<endl;continue;}
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) {
      for(int j=0;j<k;j++) {
        cout<<(n*j)+i+1<<' ';
      }
      cout<<endl;
    }
  }
  return 0;
}

