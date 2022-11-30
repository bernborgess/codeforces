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
  string a,b; cin>>a>>b;
  for(auto& c : a) c=tolower(c);
  for(auto& c : b) c=tolower(c);
  cout<<(a<b?"-1":(a==b?"0":"1"))<<endl;
  return 0;
}

