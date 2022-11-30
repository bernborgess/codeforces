/**
 *    author:  bernborgess
 *    problem: b - 1634
 *    created: 06.February.2022 11:41:54
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

const int MAX=1e5+10;
int a[MAX];

int main() { _
  int t;  cin>>t;
  int n;
  ll x,y;
  while(t--) {
    cin>>n>>x>>y;
    bool p=x&1;

set<ll> xA1,xA2;
xA1={x};
set<ll> xB1,xB2;
xB1={x+3};

    for(int i=0;i<n;i++) {
      ll k; cin>>k;
      cin>>a[i];
      // p=(k&1)^p;
      p=(a[i]&1)^p;


      
      xA2.clear();
      for(auto el:xA1) {
        xA2.insert(el+a[i]);
        xA2.insert(el^a[i]);
      }
      xA1=xA2;

      xB2.clear();
      for(auto el:xB1) {
        xB2.insert(el+a[i]);
        xB2.insert(el^a[i]);
      }
      xB1=xB2;

      cout<<"i="<<i<<" a[i]="<<a[i]<<endl;
      cout<<"XA:";for(int e:xA1)cout<<e<<' ';
      cout<<endl;
      cout<<"XB:";for(int e:xB1)cout<<e<<' ';
      cout<<endl;
    }
    debug(p);
    // cout<<(y&1==p?"ALICE":"BOB")<<endl;
    if(xA1.count(y)) {
      cout<<"ALICE"<<endl;
    } else {
      cout<<"BOB"<<endl;
    }
  }
  return 0;
}

