/**
 *    author:  bernborgess
 *    created: 28.November.2021 12:39:03
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

const int MAX = 2e5+10;
vector<int> a(MAX);
const int MAX_PRIMO = 1e6+10;
bool primo[MAX_PRIMO];

void crivo() { 
  memset(primo, true, sizeof(primo)); 
  primo[0]=false;primo[1]=false;
  for (int p=2; p*p<=MAX_PRIMO; p++) { 
    if (primo[p]) { 
      for (int i=p*p; i<=MAX_PRIMO; i += p) 
        primo[i] = false; 
    } 
  } 
} 

int main() { _
  int t;  
  cin>>t;
  int e,n;  
  crivo();
  vector<int> primosIdx;
  while(t--) {
    cin>>n>>e;
    primosIdx.resize(0);
    for(int i=0;i<n;i++) {
      cin>>a[i];
      if(primo[a[i]]) primosIdx.pbk(i);
    }
    ll ans=0LL;
    for(auto primoI:primosIdx) {
      int l=primoI,r=primoI;
      // to the right
      for(int i=primoI+e;i<n;i+=e) {
        if(a[i]==1) r=i;
        else        break;
      }
      int right=(r-primoI)/e;
      // left
      for(int i=primoI-e;i>=0;i-=e) {
        if(a[i]==1) l=i;
        else        break;
      }
      int left=(primoI-l)/e;
      ans+=(left)*(ll)(right+1)+right;
    }
    cout<<ans<<endl;
  }
  return 0;
}

