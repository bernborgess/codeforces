/**
 *    author:  bernborgess
 *    created: 25.November.2021 11:35:03
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
  string n;
  while(t--) {
    cin>>n;
    if(((n[n.size()-1])-'0')%2==0) {
      cout<<0<<endl;
      continue;
    } 
    if((n[0]-'0')%2==0) {
      cout<<1<<endl;
      continue;
    }
    int k=-1;
    for(int i=1;i<n.size()-1;i++) {
      if((n[i]-'0')%2==0) {
        k=i;
        break;
      }
    }
    if(k!=-1) {
      cout<<2<<endl;
      continue;
    }
    cout<<-1<<endl;
  }
  return 0;
}

