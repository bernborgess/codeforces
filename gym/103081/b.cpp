#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


vector<bool> update(vector<bool> l) {
  vector<bool> out(l.size(),false);
  for(int i=0;i<l.size()-1;i++) {
    if(i==0) {
      out[0] = l[0]&&l[1];
    } else {
      out[i] = !(
        ( l[i-1] && l[i] && l[i+1]) ||
        ( l[i-1] &&!l[i] &&!l[i+1]) ||
        (!l[i-1] &&!l[i] &&!l[i+1]) 
      );
    }
  }
  return out;
}

int main() { _
  string input;  cin>>input;
  vector<bool> lights(10,false);
  for(int i = 0; i<input.size();i++) {
    lights.pb(input[i]=='1');
  }
  int n;  cin>>n;

while(n--) {
  lights = update(lights);
}
  int count = 0;
  for(int i = 0; i<lights.size(); i++) {
    count += lights[i];
  }
  cout<<count<<endl;
  return 0;
}
