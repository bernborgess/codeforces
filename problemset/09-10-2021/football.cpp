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
  string field; cin>>field;
  int counter=0;
  bool flag=field[0]-'0', dangerous=false;
  for(int i=0;i<field.length();i++) {
    if(field[i]-'0'==flag) {
      counter++;
    } else {
      counter=1;
      flag=field[i]-'0';
    }
    if(counter>=7)
      dangerous=true;
  }
  cout<<(dangerous?"YES":"NO")<<endl;
  return 0;
}
// 00100110111111101
