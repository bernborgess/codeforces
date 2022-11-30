/**
 *    author:  bernborgess
 *    created: 28.December.2021 10:52:45
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

bool cmp(pii a,pii b) {
  return (a.snd-a.fst)<(b.snd-b.fst);
}

const int MAX = 1e3+10;
int id[MAX];
int n;

int find(int x) {
  if(x>n) return find(1);
  return id[x]=(id[x]==x?x:find(id[x]));
}

void uni(int x,int y) {
  x=find(x);
  id[x]=id[y]=find(y+1);
}



int main() { _
  int t; cin>>t;
  while(t--) {
    cin>>n;
    vector<pii> v(n);
    iota(begin(id),end(id),0);
    for(pii&p:v) cin>>p.fst>>p.snd;
    sort(v.begin(),v.end(),cmp);

    for(pii p:v) {
      int rep = find(p.fst);
      uni(p.fst,p.snd);
      cout<<p.fst<<' '<<p.snd<<' '<<rep<<endl;
    } 
    cout<<endl;
  }
  return 0;
}

