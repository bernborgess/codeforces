/**
 *    author:  bernborgess
 *    created: 26.November.2021 08:15:00
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

const int MAX = 1e9+10;
// vector<int> arr(MAX);

int main() { _
  int t;  cin>>t;
  ll n,l,r,k,e;
  map<int,int> mp;
  while(t--) {
    cin>>n>>l>>r>>k; mp.clear();
    for(int i=0;i<n;i++) {
      cin>>e;
      if(l<=e&&e<=r) {
        mp[e]++;
      }
    }
    int bars=0;
    for(auto p : mp) {
      if(k<p.fst) break;
      if(k<p.fst*(ll)p.snd) {
        bars+=k/p.fst;
        break;
      }
      k-=p.fst*(ll)p.snd;
      bars+=p.snd;
    }
    /*
    for(int i=l;i<=r;i++) {
      debug(i);
      if(k<i) {
        cout<<"k less i"<<endl;
        break;
      } 
      if(k<mp[i]*i) {
        cout<<"range:"<<mp[i]<<'*'<<i<<'/'<<k<<' '<<mp[i]*i/k<<endl;
        bars+= mp[i]*i/k;
        break;
      }
      k-=mp[i]*i;
      bars++;
    }*/
    cout<<bars<<endl;
  }
  return 0;
}

