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
  int t,a; cin>>t;
  string kb,s;
  map<char,int> l;
  while(t--) {
    cin>>kb>>s;
    for(int i=0;i<26;i++) 
      l[kb[i]]=i;
    a=0;
    for(int i=1;i<(int)s.size();i++) {
      a+=abs(l[s[i-1]]-l[s[i]]);
    }
    cout<<a<<endl;
  }
  return 0;
}

