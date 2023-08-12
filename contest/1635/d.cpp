/**
 *    author:  bernborgess
 *    problem: d - 1635
 *    created: 20.February.2022 13:07:47
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
#define all(v) v.begin(), v.end()
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e5+10;
const int MOD = 1e9+7;
int fSum[MAX];

void build_fsum() {
  fSum[1]=1;
  ll a=1,b=1;
  for(int i=2;i<MAX;i++) {
    a=a+b;
    b=a-b;
    a%=MOD;
    b%=MOD;
    fSum[i]=(fSum[i-1]+a)%MOD;
  }
}
ll n,p;

//! COMPLEXIDADE RUIM
void remove_children(ll el,set<int>&s) {
  //! ATENCAO
  if(el>=MOD) return;
  s.erase(el);
  remove_children((ll)el*4,s);
  remove_children(((ll)el*2)+1,s);
}

int main() { _
  build_fsum();
  cin>>n>>p;
  set<int> s;
  for(int i=0;i<n;i++) {
    int el; cin>>el;
    s.insert(el);
  }
  for(auto el:s) {
    remove_children((ll)el*4,s);
    remove_children(((ll)el*2)+1,s);
  }
  ll ans=0;
  for(auto el:s) {
    int b=1; int aux=el;
    while(aux>1) {
      aux>>=1;
      b++;
    }
    //! ATENCAO
    if(b<=p) {
    ans+=(fSum[p-b]+1);
    }
    ans%=MOD;
  }
  cout<<ans<<endl;
  return 0;
}

