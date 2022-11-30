/**
 *    author:  bernborgess
 *    created: 25.November.2021 12:58:05
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


int main() { 
  vector<int> a = {1,2,3,4,5};


  do {
  // int n;  cin>>n;
  // vector<int> a(n);
  // for(auto& i:a) cin>>i;
  deque<int> ans;
  // cout<<"vector read"<<endl;
  int l=0,r=a.size()-1;
  while(l<=r) {
    // debug(l);
    // debug(r);
    if(a[l]<a[r]) {
      ans.push_front(a[l]);
      l++;
    } else {
      ans.push_back(a[r]);
      r--;
    }
  }
  for(auto el : ans ) {
    cout<<el<<" ";
  } cout<<endl;

  } while(next_permutation(a.begin(),a.end()));

  return 0;
}

