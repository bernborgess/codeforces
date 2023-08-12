/**
 *    author:  bernborgess
 *    created: 25.November.2021 12:32:10
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
int arr[MAX];

int main() { _
  int t; cin>>t;
  int n,M=0;
  vector<int> ans;
  while(t--) {
    cin>>n;
    int iM=-1;
    for(int i=0;i<n;i++) {
      cin>>arr[i];
      if(arr[i]==n) iM=i;
    }
    if(arr[0]!=n&&arr[n-1]!=n) {
      cout<<-1<<endl;
      continue;
    }
    for(int i=iM-1;i>=0;i--) {
      cout<<arr[i]<<' ';
    }
    for(int i=n-1;i>=iM;i--) {
      cout<<arr[i]<<' ';
    }
      cout<<endl;

  }
  return 0;
}

