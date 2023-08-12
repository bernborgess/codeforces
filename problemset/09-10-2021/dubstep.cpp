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
  vector<string> tokens;
  string temp = "";
  for(int i=0;i<(int)s.length();i++) {
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B') {
      if(temp.length()>0) tokens.pb(temp);
      temp="";
      i+=2;
    } else {
      temp+=s[i];
    }
  }
  if(temp.length()>0) tokens.pb(temp);
  for(string sub : tokens) 
    cout<<sub<<" ";
  cout<<endl;
  return 0;
}

