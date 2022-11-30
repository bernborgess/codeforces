/**
 *    author:  bernborgess
 *    created: 05.November.2021 09:13:00
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


int f(int x) {
  x+=1;
  while(!(x%10)) x/=10;
  return x;
}
 
int main() { _
  string n; cin>>n;
  if(n.length()<2) cout<<9<<endl;
  else {
    int cnt=10;
    for(int i=1;i<n.length();i++) {
      cnt+=9-(n[i]-'0');
    }
    cout<<cnt<<endl;
  }
  return 0;
}
 

