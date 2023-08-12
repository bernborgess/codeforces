/**
 *    author:  bernborgess
 *    created: 20.December.2021 11:39:27
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

const int LIM = 100000;
const int MAX = 1e9+10;

int bb(int n, vector<int> v) {
  int l=0, r=v.size();
  while(l<r) {
    int m=(l+r)/2;
    if(v[m]>n) r=m;
    else       l=m+1;
  }
  return l;
}

int main() { _
  vector<int> sqr,cub,six;
  for(ll i=1;i<LIM;i++) {
    if(i*i>MAX) break;
    sqr.pbk(i*i);
    if(i*i*i>MAX) continue;
    cub.pbk(i*i*i);
    if(i*i*i*i*i*i>MAX) continue;
    six.pbk(i*i*i*i*i*i);
  }

  int t;  cin>>t;
  int n;
  while(t--) {
    cin>>n;
    int a = bb(n,sqr);
    int b = bb(n,cub);
    int c = bb(n,six);
    cout<<a+b-c<<endl;
  }
  return 0;
}

