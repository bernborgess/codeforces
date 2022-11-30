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
  int t,n; cin>>t;
  vector<int> a;
  while(t--) {
    cin>>n; a.resize(n);
    for(int& i : a) cin>>i;

    // n%2==0 easy, pegar l++,r-- e usar o elemento oposto
    // n%2==1 fazer o mesmo com excecao dos 3 do meio "x,y,z"
    // nesse caso achar o k:=mmc(x,y,z) e printar k/x k/y e -2*k/z
    

  }
  return 0;
}

