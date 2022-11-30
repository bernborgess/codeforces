/**
 *    author:  bernborgess
 *    created: 26.December.2021 12:55:00
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
bool isPrime[MAX];

void crivo() {
  memset(isPrime,true,sizeof(isPrime));
  isPrime[0]=false,isPrime[1]=false;
  for(int i=2;i*i<=MAX;i++) if(isPrime[i]) {
    for(int j=i*i;j<=MAX;j+=i) {
      isPrime[j]=false;
    }
  }
}

bool isTPrime(ll x) {
  ll l=1,r=x/2;
  ll p=-1;
  while(l<=r) {
    ll m=(r+l)/2;
    if(m*m==x) {
      p=m;
      break;
    }
    if(m*(double)m<x)
      l=m+1;
    else
      r=m-1;
  }
  if(p==-1)
    return false;
  return isPrime[p];
}

int main() { _
  int n; cin>>n;
  crivo();
  while(n--) {
    ll x; cin>>x;
    cout<<(isTPrime(x)?"YES":"NO")<<endl;
  }
  return 0;
}
