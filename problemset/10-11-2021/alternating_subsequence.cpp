/**
 *    author:  bernborgess
 *    created: 10.November.2021 17:16:45
**/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pbk push_back
#define lob lower_bound
#define upb upper_bound
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


int main() { _
  int t,n,a,l; cin>>t;
  bool is_neg;
  ll sum;
  while(t--) {
    cin>>n>>a; 
    is_neg = a<0;
    sum=a;l=a;    
    for(int i=1;i<n;i++) {
      cin>>a;
      if(is_neg!=a<0)
        sum+=a,is_neg=!is_neg,l=a;
      else if(sum+a-l>sum) 
        sum+=a-l,l=a;
    }
    cout<<sum<<endl;
  }  
  return 0;
}

