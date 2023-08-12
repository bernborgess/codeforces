/**
 *    author:  bernborgess
 *    problem: e - 1650
 *    created: 08.March.2022 12:43:14
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

// GCC BUILTIN FUNCTIONS
// __builtin_popcount(x)  // count_ones
// __builtin_parity(x)    // bit_parity
// __builtin_clz(x)       // count_lead_zeros
// __builtin_ctz(x)       // count_zeros
// __lg(x)                // log_two

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
  int t;  cin>>t;
  int n,d;
  while(t--) {
    cin>>n>>d;
    vector<int>a(n);
    for(int&i:a)cin>>i;

    if(n==2) {
      cout<<max({
        a[1]/2,
        min(a[0],(d-a[0])/2)
      })<<endl;
      continue;
    }



    int minD=INF,maxD=0;
    for(int i=1;i<n;i++) {
      if(a[i]-a[i-1]<minD) minD=a[i]-a[i-1];
      if(a[i]-a[i-1]>maxD) maxD=a[i]-a[i-1];
    }

    int startDist=a[0]/2;

    vector<int> minis;
    vector<int> bigs;
    for(int i=1;i<n;i++) {
      if(a[i]-a[i-1]==minD)
        minis.pbk(i);
      if(a[i]-a[i-1]==maxD)
        bigs.pbk(i);
    }
    if(minis.size()>2) {cout<<minD<<endl;continue;}
    int endDist=(a[n-1]==d?minD:d-a[n-1]);
    
    if(minis.size()==2) {
      if(minis[0]+1<minis[1]){cout<<minD<<endl;continue;}
      
      if(n==3) {
        cout<<max({
          min(startDist,2*minD),
          min(d-a[n-1],2*minD)
        })<<endl;
        continue;
      }

      // ...0==0==0...
      cout<<max({
        min(maxD/2,2*minD), // Joga no maior intervalo
        min(startDist,2*minD),
        min(endDist,2*minD)
      })<<endl;
      continue;
    }
    // minis.size()==1




    int x,l,r=minis[0],y;
    // x...l==r...y
    l=r-1,y=r+1,x=r-2;

    if(x>=0&&y<n) {
      cout<<max({
        min((a[r]-a[x])/2,a[y]-a[r]),
        min((a[y]-a[l])/2,a[l]-a[x]),
        min({startDist,a[r]-a[x],a[y]-a[r]}),
        min({startDist,a[l]-a[x],a[y]-a[l]}),
        (y<n-1?min({endDist,a[r]-a[x],a[y]-a[r]}):0),
        (y<n-1?min({endDist,a[l]-a[x],a[y]-a[l]}):0)
      })<<endl;
      continue;
    }
    if(x>=0) {
      cout<<max({
        (a[r]-a[x])/2,
        min((d-a[l])/2,a[l]-a[x]),
        min({startDist,a[r]-a[x]}),
        min({startDist,a[l]-a[x]}),
        min({d-a[r],a[r]-a[x]}),
        min({d-a[l],a[l]-a[x]})
      })<<endl;
      continue;
    }
    if(y<n) {
      cout<<max({
        min((a[r])/2,a[y]-a[r]),
        min((a[y]-a[l])/2,a[l]),
        min({a[l]/2,a[y]-a[l]}),
        (y<n-1?min({endDist,a[r]-a[x],a[y]-a[r]}):0),
        (y<n-1?min({endDist,a[l]-a[x],a[y]-a[l]}):0)
      })<<endl;
      continue;
    }
    
  }
  return 0;
}

