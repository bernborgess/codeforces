/**
 *    author:  bernborgess
 *    created: 27.December.2021 18:26:34
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
int v[MAX];
// ({0,1},idx)
typedef pair<bool,int> pbi;
vector<pbi> k;

bool cmp(pbi a,pbi b) {
  if(a.fst!=b.fst) return a.fst;
  return v[a.snd]>v[b.snd];
}

int main() { _
  int t,n; cin>>t;
  while(t--) {
    cin>>n;
    k=vector<pbi>(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) {
      char like;  cin>>like;
      k[i]={like=='1',i};
    }
    sort(k.begin(),k.end(),cmp);
    int val=n;
    for(auto i:k)
      v[i.snd]=val--;
    for(int i=0;i<n;i++)
      cout<<v[i]<<' ';
    cout<<endl;
  }
  return 0;
}

