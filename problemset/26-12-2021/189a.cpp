/**
 *    author:  bernborgess
 *    created: 26.December.2021 15:19:50
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
  int n,a,b,c; cin>>n>>a>>b>>c;
  if(b<c) swap(b,c);
  if(a<b) swap(a,b);
  if(b<c) swap(b,c);

  int na,nb,nc; na=nb=nc=0;
  int M=0;
  nc=n/c;
  while(nc>=0) {
    nb=(n-nc*c)/b;
    while(nb>=0) {
      na=(n-nb*b-nc*c)/a;
      if(a*na+b*nb+c*nc==n) {
        M=max(M,na+nb+nc);
      }
      nb--;
    }
    nc--;
  }
  cout<<M<<endl;
  return 0;
}

