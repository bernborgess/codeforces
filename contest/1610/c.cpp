/**
 *    author:  bernborgess
 *    created: 23.November.2021 12:49:51
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

const int MAX = 2e5+10;
int a[MAX];
int b[MAX];
int r[MAX];
int p[MAX];


int main() { _
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    memset(r,-1,sizeof(int)*n);
    memset(p,-1,sizeof(int)*n);
    for(int i=0;i<n;i++) {
      cin>>a[i]>>b[i];
      a[i]=min(a[i],n-i-1);
      b[i]=min(b[i],i);
    }

    p[0]=1; 
    int maxP=1; // numero de pessoas na festa [0..i]
    for(int i=1;i<n;i++) {
      p[i] = min(b[i],maxP+1);
      maxP=max(p[i],maxP);
    }
    r[n-1]=1;
    int maxR=1; // numero de pessoas na festa [i..n-1]
    for(int i=n-1;i>=0;i--) {
      r[i] = min(a[i],maxR+1);
      maxR=max(r[i],maxR);
    }
    int ans=0,maxDude=-1;
    for(int i=0;i<n;i++) {
      if(min(r[i],p[i])>ans) {
        ans=max(ans,min(r[i],p[i]));
        maxDude=i;
      }

    }
    cout<<ans+1<<endl;
    cout<<maxDude<<' '<<r[maxDude]<<' '<<p[maxDude]<<endl;
  }
  return 0;
}

