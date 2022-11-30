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
  int t;  cin>>t;
  int n,m,a,b,c;
  vector<int> v;
  while(t--) {
    cin>>n>>m;  v.assign(n,0);
    for(int i=0;i<m;i++) {
      cin>>a>>b>>c;
      v[b-1]++;
    }
    int minVal=INF,minIdx=-1;
    for(int i=0;i<n;i++) {
      if(v[i]<minVal) {
        minVal=v[i];
        minIdx=i;
      } if(minVal==0) break;
    }
    if(minVal==0) {
      for(int i=1;i<=n;i++) if(i!=minIdx+1) {
        cout<<i<<" "<<minIdx+1<<endl;
      }
    } else {
      cout<<"idk"<<endl;
    }


  }
  return 0;
}

