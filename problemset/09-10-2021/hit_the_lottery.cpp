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
  int n; cin>>n;
  int bills=0;
  int notes[] = {100,20,10,5,1};
  for(int i=0;i<5;i++) {
    bills+=n/notes[i];
    n%=notes[i];
  }
  cout<<bills<<endl;
  return 0;
}

