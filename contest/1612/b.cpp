/**
 *    author:  bernborgess
 *    created: 22.November.2021 06:58:12
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
  int t; cin>>t;
  int n,a,b;
  while(t--) {
    cin>>n>>a>>b;
    if(b<=n/2-1||a>n-(n/2-1)) {
      cout<<-1<<endl;
      continue;
    } 
    if(b>a&&(a==n-(n/2-1)||b==n/2)){
      cout<<-1<<endl;
      continue;
    }
    int cnt=0,i=n;
    while(cnt<n/2-1) {
      if(i!=a&&i!=b) {
        cout<<i<<' ';
        cnt++;
      } 
      i--;
    }
    cout<<a<<' ';
    cnt++;
    while(cnt<n-1) {
      if(i!=a&&i!=b) {
        cout<<i<<' ';
        cnt++;
      }
      i--;
    }
    cout<<b<<endl;
  }
  return 0;
}

