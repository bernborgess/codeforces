/**
 *    author:  bernborgess
 *    created: 26.December.2021 21:00:45
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
  int k,r; cin>>k>>r;
  for(int i=1;i<10;i++) {
    if(!(k*i%10)||!((k*i-r)%10)) return cout<<i<<endl,0;
  }
  cout<<10<<endl;
  return 0;
}

