/**
 *    author:  bernborgess
 *    created: 21.November.2021 15:12:06
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
// #define endl '\n' : ITERATIVO
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll Sqrt(ll x) {
  ll s = 0, f = x;
  while(s != f){
    ll m = (s+f)/2;
    if (m*m < x) {
      s = m + 1;
    }
    else{
      f = m;
    }
  }
  return s;
}

ll sum(ll a) {
 return (a*(a-1))/2;
}

ll rsum(ll a){
  return (1LL+Sqrt(1+8*a))/2;
} 

ll ask(ll a,ll b) {
  cout<<"? "<<a<<" "<<b<<endl;
  cout.flush();
  ll resp;
  cin>>resp;
  return resp;
}

void answer(ll i, ll j, ll k ) {
  cout<<"! "<<i<<" "<<j<<" "<<k<<endl;
  cout.flush();
}

int main() { _
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    // ? Question: 
    // ? l r
    // ! Answer:
    // ! i j k
    ll l=1,r=n, m, resp;
    ll i,j,k;
    ll total=ask(1,n);
    while(true) {
      m = (l+r)/2;
      resp = ask(1,m);
      if(!resp) {
        l=m+1;
      } else if(resp==total) {
        r=m;
      } else {
        break;
      }
    }
    
    ll g = ask(1,m-1);
    // resp-g == m-i 
    int iOUj = g-resp+m;
    // ? Se for i, 
    if(resp==sum(m-iOUj+1)) {
      i=iOUj;
      // TODO: BB pra achar j?
    } else {
      j=iOUj;
      k = j+ rsum(ask(j,n));
    }
  
  }
  return 0;
}

