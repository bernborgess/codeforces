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
  int a,b;
  cin>>a; cin>>b;
  if(a%2!=b%2) {
    int c; cin>>c; 
    cout<<(a%2==c%2?"2":"1")<<endl;
  } else {
    for(int i=2;i<n;i++) {
      cin>>b;
      if(b%2!=a%2) {
        cout<<i+1<<endl;
        break;
      }
    }
  }
  return 0;
}

