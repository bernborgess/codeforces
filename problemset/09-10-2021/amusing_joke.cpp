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
  int letters[26] = {0};
  bool fine=true;
  string host,guest,scramble;
  cin>>host>>guest>>scramble;
  for(char ch : scramble) letters[ch-'A']++;
  for(char ch : host) {
    if(letters[ch-'A']<=0) {fine=false; break;}
    letters[ch-'A']--;
  }
  for(char ch : guest) {
    if(letters[ch-'A']<=0) {fine=false; break;}
    letters[ch-'A']--;
  }
  for(int i=0;i<26;i++) fine = fine && !letters[i];
  cout<<(fine?"YES":"NO")<<endl;
  return 0;
}

