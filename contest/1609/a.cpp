/**
 *    author:  bernborgess
 *    created: 28.November.2021 11:35:02
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


int main() { _
  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    vector<int> a(n);
    ll twos=0;
    int M=0,iM=-1;
    for(int i=0;i<n;i++) { 
      cin>>a[i];
      while(!(a[i]%2)) {
        twos++;
        a[i]/=2;
      }
      if(a[i]>M) {
        M=a[i];
        iM=i;
      }
    }
    ll sum=0;
    for(int i=0;i<n;i++) {
      if(i==iM) {
        sum+=(ll)a[i]<<twos;
      } else {
        sum+=a[i];
      }
    }

    cout<<sum<<endl;
  
  }
  return 0;
}

