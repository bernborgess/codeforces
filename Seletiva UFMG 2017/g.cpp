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
  string s; cin>>s;
  string out = "";
  char pivo = s[0];
  int streak=1;
  for(int i=1;i<(int)s.size();i++) {
    if(s[i]!=pivo) {
      out += pivo + to_string(streak) ;
      pivo=s[i];
      streak=1;
    } else {
      streak++;
    }
  }
  out += pivo + to_string(streak);
  cout<<out<<endl;
  return 0;
}

