/**
 *    author:  bernborgess
 *    created: 27.December.2021 20:08:08
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

const int MAX = 2e5+10;
int a[MAX];

int main() { _
  int t,n;
  ll k,sum; 
  cin>>t;
  while(t--) {
    cin>>n>>k; sum=0LL; 
    for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
    if(sum<=k){cout<<0<<endl;continue;}
    sort(begin(a),begin(a)+n);
    ll p=sum-k,q=0;
    // reduzir ate a soma ser <= k
    for(int i=n-1;i>0;i--) {
      q++;
      // a[i]=a[0]
      sum-=a[i]-a[0];
      if(sum<=k){p=min(p,q);}
      else {
        ll u,v; u=sum-k;
        v=u/(q+1);
        // proximo mult de q+1
        if(u%(q+1)!=0)v++;
        p=min(p,q+v);
      }
    }
    cout<<p<<endl;
  }
  return 0;
}

