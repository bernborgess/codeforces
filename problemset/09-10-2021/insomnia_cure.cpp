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
  int k,l,m,n,d,damage=0;  cin>>k>>l>>m>>n>>d;
  for(int i=1;i<=d;i++) if(!(i%k&&i%l&&i%m&&i%n)) damage++;
  cout<<damage<<endl;
  return 0;
}

