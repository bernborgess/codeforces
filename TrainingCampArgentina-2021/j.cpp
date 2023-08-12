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



int main() { _
  ll r,l;
  cin>>l>>r;
  if(r-l<2 || (r-l==2 && l%2)) {
    cout<<-1<<endl;
  } else {
    if(l%2) cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    else    cout<<l<<" "<<l+1<<" "<<l+2<<endl;
  }
  return 0;
}

