/**
 *    author:  bernborgess
 *    problem: b - 1635
 *    created: 20.February.2022 11:38:51
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
    vector<int> a(n);
    for(int&i:a)cin>>i;
    int mov=0;
    for(int i=1;i<n-1;i++) {
      if(a[i-1]<a[i]&&a[i+1]<a[i]) {
        mov++;
        // verify next i+2
        if(i+2<n-1  
        &&a[i+2-1]<a[i+2]&&a[i+2+1]<a[i+2]) {
          a[i+1]=max(a[i],a[i+2]);
        }
        else {
          a[i]=max(a[i-1],a[i+1]);
        }
      }
    }
    cout<<mov<<endl;
    for(int i:a) cout<<i<<' ';
    cout<<endl;
  }
  return 0;
}

// 1 2 1 3 2 3 1 2 1
//!1 1 1 3 3 3 1 1 1 
// 1 2 3 3 2 3 3 2 1