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
  string p; cin>>p;
  if(p.find('H') != string::npos 
  || p.find('Q') != string::npos 
  || p.find('9') != string::npos 
  ) {
    cout<<"YES"<<endl;
  } else {
    cout<<"NO"<<endl;
  }
  return 0;
}

