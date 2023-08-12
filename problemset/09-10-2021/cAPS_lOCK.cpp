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
  bool ALLCAPS=true;
  for(int i=1;i<(int)s.length();i++) if(islower(s[i])) ALLCAPS=false;
  if(ALLCAPS) {
    s[0] = isupper(s[0])?tolower(s[0]):toupper(s[0]);
    for(int i=1;i<(int)s.length();i++) s[i]=tolower(s[i]);
  }
  cout<<s<<endl;
  return 0;
}

