/**
 *    author:  bernborgess
 *    created: 26.November.2021 09:17:41
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

const int MOD = 1e9+7;
const int MAX = 2e5+10;
int n,m;
vector<int> a(MAX); 


int cozy() {
  ll ans=0LL;
  vector<int> bits(8);//(0,1)
  for(int i=0;i<n;i++) {
    ans= (ans+a[i])%MOD;
    for(int j=0;j<8;j++) {
      if(a[i]&(1<<j))
        bits[j]++;
    }
  }

  for(int j=0;j<8;j++) {
    cout<<n-bits[j]<<','<<bits[j]<<' ';
    ans=(ans+(n-bits[j])*(ll)bits[j])%MOD;
  }
  cout<<endl;
  return (int) ans;
}

int main() { _

  n=5;
  a = {5,6,7,0,2};
  cout<<cozy()<<endl;
  // while(t--) {
  //   cin>>n>>m;
  //   int l,r,x;
  //   for(int i=0;i<m;i++) {
  //     cin>>l>>r>>x;
  //     if(l==r) {a[l]=x;continue;}
  //     ;

  //   }
  //   cout<<cozy()<<endl;
  // }
  return 0;
}

