/**
 *    author:  bernborgess
 *    created: 23.November.2021 11:42:16
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

const int MAX = 2e6+10;
int arr[MAX];

int main() { _
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    for(int i=0;i<n;i++) 
      cin>>arr[i];
    if(n<=2) {
      cout<<"YES"<<endl;
      continue;
    }
    int l=0,r=n-1;
    int pa=-1,pb=-1;
    bool kalindrom=true;
    while(l<r) {
      if(arr[l]!=arr[r]) {
        pa=arr[l];
        pb=arr[r];
        break;
      }
      l++,r--;
    }
    if(pa==-1) {
      cout<<"YES"<<endl;
      continue;
    }
    l=0,r=n-1;
    while(l<r) {
      if(arr[l]==pa) {
        l++; continue;
      }
      if(arr[r]==pa) {
        r--; continue;
      }
      if(arr[l]!=arr[r]) {
        kalindrom=false;
        break;
      }
      l++,r--;
    }
    if(kalindrom) {
      cout<<"YES"<<endl;
      continue;
    }
    kalindrom=true;
    l=0,r=n-1;
    while(l<r) {
      if(arr[l]==pb) {
        l++; continue;
      }
      if(arr[r]==pb) {
        r--; continue;
      }
      if(arr[l]!=arr[r]) {
        kalindrom=false;
        break;
      }
      l++,r--;
    }
    cout<<(kalindrom?"YES":"NO")<<endl;
  }
  return 0;
}

