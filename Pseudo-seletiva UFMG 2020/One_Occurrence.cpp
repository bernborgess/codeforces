#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
  int n; cin>>n;
  vector<int> a(n);
  for(int& e : a ) cin>>e;
  int q; cin>>q;
  int l,r;  
  unordered_set<int> unique;
  unordered_set<int> repeat;
  while(q--) {
    cin>>l>>r;  unique.clear(); repeat.clear();
    for(int i=l-1;i<r;i++) {
      if(!repeat.count(a[i])&&!unique.count(a[i])) {
        unique.insert(a[i]);
      } else if(unique.count(a[i])) {
        unique.erase(a[i]);
        repeat.insert(a[i]);
      }
    }
    cout<<(unique.size()?*unique.begin():0)<<endl;
  }
  return 0;
}

