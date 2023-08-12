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
  int t; cin>>t;
  int a,b,c;
  while(t--) {
    cin>>a>>b>>c;
    c%=2; 
    if(c>0) a--,b--,c--;
    b%=2; 
    if(b>0&&a>=2) b--, a-=2;
    a%=2;
    cout<<(a?1:0)<<endl;    
  }
  return 0;
}

