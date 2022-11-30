/**
 *    author:  bernborgess
 *    created: 14.December.2021 11:41:51
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
    string bf,no;
    cin>>bf;
    if(n==3) {
      cout<<bf<<'a'<<endl;
      continue;
    }
    cout<<bf[0];
    bool miss=false;
    for(int i=1;i<n-2;i++) {
      cin>>no;
      if(bf[1]!=no[0]) {
        cout<<bf[1]<<no[0];
        miss=true;
      } else {
        cout<<bf[1];
      }
      bf[1]=no[1];
    }
    cout<<no[1];
    if(!miss) cout<<no[1];
    cout<<endl;
  }
  return 0;
}

