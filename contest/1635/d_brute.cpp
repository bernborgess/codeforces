/**
 *    author:  bernborgess
 *    problem: d - 1635
 *    created: 20.February.2022 12:21:24
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

const int MOD = 1e9+7;
const int MAX = 2e5+10;
ll n,p;
bool in_set[MOD];

int main() { _
  cin>>n>>p;
  memset(in_set,0,sizeof(in_set));
  for(int i=1;i<=n;i++) {
    int el; cin>>el;
    if(el<MAX) in_set[el]=1;
  }
  // cout<<"bit:"<<(1<<p)<<endl;
  // for(int i=1;i<(1<<p);i++) {
  for(int i=1;i<(MAX);i++) {

    if(i&1) in_set[i]|=in_set[(i-1)/2];
    else if(!(i&2))  in_set[i]|=in_set[i/4];
  }
  ll count=0;
  // for(int i=0;i<min(1<<p,MAX);i++) {
  p=0;
  for(int i=0;i<MAX;i++) {
    // cout<<in_set[i]<<' ';
    if(in_set[i]) count++;
    if(1<<(p)==i) {
      cout<<p<<':'<<count<<endl;    
      p++;
    }
  }
  cout<<endl;
  cout<<count<<endl;
  return 0;
}

