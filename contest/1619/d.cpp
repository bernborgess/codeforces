/**
 *    author:  bernborgess
 *    created: 20.December.2021 12:36:05
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

const int MAX = 1e5+10;

int main() { _
  int t;  cin>>t;
  int m,n;
  vector<int> maxF(MAX,0);
  while(t--) {
    cin>>m>>n;
    fill(maxF.begin(),maxF.begin()+n,0);
    int iM,jF,F,jS,S;
    iM=jF=F=jS=S=0;
    for(int i=0;i<m;i++) {
      int jP,P,jV,V;
      jP=P=jV=V=0;
      for(int j=0;j<n;j++) {
        int temp;
        cin>>temp;
        if(temp>maxF[j]) maxF[j]=temp;
        if(temp>P) {
          jV=jP,V=P;
          jP=j,P=temp;
        } else if(temp>V) {
          V=temp;
          jV=j;
        }
      }
      if(V>S) {
        iM=i;
        jF=jP; F=P;
        jS=jV; S=V;
      }
    }
    int ans=INF;
    for(int j=0;j<n;j++) {
      if(j!=jF&&j!=jS) {
        ans=min(ans,maxF[j]);
      } else {
        ans=min(ans,S);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

