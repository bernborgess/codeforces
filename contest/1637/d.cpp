/**
 *    author:  bernborgess
 *    problem: d - 1637
 *    created: 12.February.2022 13:39:05
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
#define sqr(a) (a)*(ll)(a)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define debug(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5+10;
int n;
int a[MAX];
int b[MAX];

// ll cost(vector<int>&v) {
//   ll ans=0;
//   for(int i=0;i<v.size();i++)
//   for(int j=i+1;j<v.size();j++)
//     ans+=sqr(v[i]+v[j]);
//   return ans;
// }

pii MEM[MAX];
pii dp(int x) {
  if(x<0) return {1,1};
  if(MEM[x].fst!=-1) return MEM[x];
  pii&ans=MEM[x];
  pii bfr=dp(x-1);
  if((bfr.fst*a[x]+bfr.snd*b[x])<
     (bfr.fst*b[x]+bfr.snd*a[x]))
  return ans={bfr.fst*a[x],bfr.snd*b[x]};
  return ans={bfr.fst*b[x],bfr.snd*a[x]};
}

int main() { _
  int t;  cin>>t;
  while(t--) {
    cin>>n;
    memset(MEM,-1,sizeof(MEM));
    for(int i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++)  cin>>b[i];

    ll ans=0;
    pii dans=dp(n-1);
    for(int i=0;i<n;i++) {
      ans+=(a[i]*(ll)a[i]);
      ans+=(b[i]*(ll)b[i]);
    }
    ans*=3;
    ans+=2*(dans.fst+dans.snd);
    cout<<ans<<endl;
    // cout<<ans.fst+ans.snd<<endl;



    // ll ca=cost(a);
    // ll cb=cost(b);
    // if(ca>cb) {

    // } else {

    // }
    // cout<<ca<<'+'<<cb<<'='<<ca+cb<<endl;
  }
  return 0;
}

