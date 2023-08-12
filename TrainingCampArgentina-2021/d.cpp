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
  int n;cin>>n;
  vector<pair<int,int>> v(n,{1,0});
  for(int i=0;i<n;i++)cin>>v[i].snd;
  sort(v.begin(),v.end());
  for(int i=n-1;i>0;i--) if(v[i].snd==v[i-1].snd) {
    v[i-1].fst = v[i].fst + 1;
    v.erase(v.begin()+i);
  }
  sort(v.rbegin(),v.rend());
  ll maxPoints = 0;
  int val,occ;
  for(int i=0;i<v.size();i++) {
    occ = v[i].fst;
    val = v[i].snd;
    maxPoints += v[i].fst * v[i].snd;
    if(v[i].fst) for(int j=0;j<v.size();j++) {
      if(v[j].snd==v[i].snd-1 || v[j].snd==v[i].snd+1) {
        v[j].fst = 0;
      }
    }
    v[i].fst = 0;
  }

  cout << maxPoints << endl;
  return 0;
}

