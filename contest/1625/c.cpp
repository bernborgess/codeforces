/**
 *    author:  bernborgess
 *    problem: c - 1625
 *    created: 12.January.2022 09:35:53
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

const int MAX = 510;
ll d[MAX],a[MAX];

int id[MAX];

int find(int i) {
  int id_nxt = (id[i]<0?i:find(id[i]));
  if(id_nxt!=i) return id[i]=id_nxt;
  return id_nxt;
}

void unite(int i,int j) {
  i=find(i), j=find(j);
  if(-id[i]<-id[j]) swap(i,j);
  a[i]=min(a[i],a[j]);
  id[i]+=id[j];
  id[j]=i;
}



int main() { _
  int n,l,k; cin>>n>>l>>k;
  memset(id,-1,sizeof(id));

  for(int i=0;i<n;i++) cin>>d[i];
  for(int i=0;i<n;i++) cin>>a[i];

  for(int kk=0;kk<k;kk++) {
    ll impacto=0;
    int idx=0;
    for(int i=-(id[find(0)]);i<n;) {
      int next=i-id[find(i)];
      ll dist = ((next==n?l:d[next])-d[i]);
      ll before = a[find(i)]*dist;
      ll after = a[find(i-1)]*dist;
      if(after-before<impacto) {
        impacto=after-before;
        idx=i;
      }
      i=next;
    }
    if(impacto==0) break;
    unite(idx,idx-1);
  }

  ll ans=0;

  for(int i=0;i<n;)  {
    int next=i-id[find(i)];
    ll dist = ((next==n?l:d[next])-d[i]);
    ans+=(dist)*(ll)a[find(i)];
    i=next;
  }

  cout<<ans<<endl;
  return 0;
}

