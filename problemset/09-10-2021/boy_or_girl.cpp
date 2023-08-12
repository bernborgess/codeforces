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

//? if the number of distinct characters in one's username
//? is odd, then he is a male, otherwise she is a female.

int main() { _
  string username; cin>>username;
  set<char> letters;
  for(char c : username) {
    letters.insert(c);
  }
  cout<<(letters.size()%2?
  "IGNORE HIM!":
  "CHAT WITH HER!")<<endl;
  return 0;
}

