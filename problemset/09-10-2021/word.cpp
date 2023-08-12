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
  int count=0; 
  for(char c : s) {
    if(islower(c)) 
      count++;
    else
      count--;
  }
  if(count>=0) { // to lower
    for(char& c : s) c=tolower(c);
  } else {
    for(char& c : s) c=toupper(c);
  }
  cout<<s<<endl;
  return 0;
}

