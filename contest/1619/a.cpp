/**
 *    author:  bernborgess
 *    created: 20.December.2021 10:40:52
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
  string s;
  while(t--) {
    cin>>s;
    if(s.size()%2) {
      cout<<"NO"<<endl;
      continue;
    }
    bool is=true;
    int n=s.size()/2;
    for(int i=0;i<n;i++) {
      if(s[i]!=s[i+n]) {
        is=false;
        break;
      }
    }
    cout<<(is?"YES":"NO")<<endl;
  }
  return 0;
}


