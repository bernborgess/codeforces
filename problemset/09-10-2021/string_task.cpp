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
/**
 * TODO: 
 * 1. deletes all the vowels={'A','O','Y','E','U','I'}
 * 2. inserts a character "." before each consonant,
 * 3. replaces all uppercase consonants with corresponding lowercase ones.
*/

int main() { _
  string vowels = "aoyeui";
  string str; cin>>str;
  for(int i=0;i<str.length();i++) {
    str[i] = tolower(str[i]);
    if(vowels.find(str[i])!=string::npos) {
      str.erase(i,1);
      i--;
    } else {
      str.insert(i,".");
      i++;
    }
  }
  cout<<str<<endl;
  return 0;
}

