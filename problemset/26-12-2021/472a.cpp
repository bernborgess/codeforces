/**
 *    author:  bernborgess
 *    created: 26.December.2021 22:00:04
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

const int MAX = 1e6+10;
bool prime[MAX];

void crivo() {
  memset(prime,true,sizeof(prime));
  prime[1]=false;
  for(int i=2;i*i<=MAX;i++) if(prime[i]) {
    for(ll j=i*i;j<MAX;j+=i) prime[j]=false;
  }
}

int main() { _
  crivo();
  int n; cin>>n;
  for(int i=4;i<n;i++) {
    if(!prime[i]&&!prime[n-i]) return cout<<i<<' '<<n-i<<endl,0;
  }
  return 0;
}

