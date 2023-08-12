/**
 *    author:  bernborgess
 *    created: 12.November.2021 12:42:48
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
  int t,n; cin>>t;
  string s;
  while(t--) {
    cin>>n>>s;
    int best=INF;
    for(int i=0;i<n-1;i++) {
      int a=0,b=0,c=0;
      for(int j=i;j<n;j++) {
        if(s[i]=='a') a++;
        if(s[i]=='b') b++;
        if(s[i]=='c') c++;
        if(a>b&&a>c&&j>i) {
          best=min(best,j-i);
        }
      }
    }
    cout<<best+1<<endl;
  }
  return 0;
}

