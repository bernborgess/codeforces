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
  int polyhedrons=0;
  string s;
  while(n--) {
    cin>>s;
    polyhedrons+=s=="Tetrahedron"?4
    :s=="Cube"?6
    :s=="Octahedron"?8
    :s=="Dodecahedron"?12
    :s=="Icosahedron"?20:0;
  }
  cout<<polyhedrons<<endl;
  return 0;
}

