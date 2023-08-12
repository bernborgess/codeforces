/**
 *    author:  bernborgess
 *    problem: d - 1634
 *    created: 06.February.2022 13:03:26
**/
#include <bits/stdc++.h>

using namespace std;

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
#define all(v) v.begin(), v.end()
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1024;
int a[MAX];

int query(int i,int j,int k) {
  cout<<"? "<<i<<' '<<j<<' '<<k<<endl;
  cin>>i;
  return i;
}

void answer(int i,int j) {
  cout<<"! "<<i<<' '<<j<<endl;
}

int main() {
  int t;  cin>>t;
  int n,M,Mi,p,q,x,e,i;
  while(t--) { // 2(n-2) + 2 queries
    cin>>n;
    M=-1,Mi=0;
    for(i=3;i<=n;i++) {
      e=query(1,2,i);
      if(e>M) { M=e,Mi=i; }
    }
    p=1,q=Mi;
    M=-1;
    for(i=1;i<=n;i++) 
    if(i!=p&&i!=q) {
      e=query(p,q,i);
      if(e>M) { M=e,Mi=i; }
    }
    x=1;
    while(x==p||x==q||x==Mi)x++;
    if(query(p,q,x)==M) answer(p,q);
    else if(query(q,Mi,x)==M) answer(q,Mi);
    else answer(p,Mi);
  }
  return 0;
}

