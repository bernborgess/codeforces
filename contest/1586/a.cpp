/**
 *    author:  bernborgess
 *    created: 21.December.2021 13:34:11
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

bool prime(int x) {
  bool is=true;
  for(int i=2;i*i<=x;i++) if(x%i==0) {
    is=false; break;
  }
  return is;
}

int main() { _
  int t;  cin>>t;
  int n,odd;
  ll s1,s2;
  while(t--) {
    cin>>n; s1=0LL,s2=0LL; odd=-1;
    for(int i=0;i<n;i++) {
      int temp; cin>>temp;
      s1+=temp;
      if(temp%2) {
        if(odd==-1) odd=temp;
        else if(temp<odd) {
          s2+=odd;  odd=temp;
        }
      } else
        s2+=temp;
    }
    cout<<(prime(s1)?s1:s2)<<endl;
  }
  return 0;
}

