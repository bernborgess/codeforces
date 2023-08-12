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
  int n,p,q,k; cin>>n;
  vector<bool> passLevels(n);
  cin>>p; 
  for(int i=0;i<p;i++) {
    cin>>k; passLevels[k-1]=true;
  }
  cin>>q; 
  for(int i=0;i<q;i++) {
    cin>>k; passLevels[k-1]=true;
  }
  bool iAmTheGuy = true;
  for(int i=0;i<n;i++) iAmTheGuy = iAmTheGuy && passLevels[i];  
  cout<<(iAmTheGuy?"I become the guy.":"Oh, my keyboard!")<<endl;
  return 0;
}

