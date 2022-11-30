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
  int t; cin>>t;
  int n;
  string s;
  while(t--) {
    cin>>n>>s;
    int l=0,r=n-1;
    char d1=' ',d2=' ';
    for(;l<r;l++,r--) if(s[l]!=s[r]) {
      d1=s[l];
      d2=s[r];
      break; 
    }
    if(d1==' '&&d2==' ') {
      cout<<0<<endl;
    } else {
      l=0,r=n-1;
      int c1=0,c2=0;
      for(;l<r;l++,r--) {
        if(s[l]==d1&&s[r]==d1) continue;
        while(s[l]==d1&&l<r) c1++,l++;
        while(s[r]==d1&&l<r) c1++,r--;
        if(s[l]!=s[r]) {
          c1=INF;
          break;
        }
      }
      l=0,r=n-1;
      for(;l<r;l++,r--) {
        if(s[l]==d2&&s[r]==d2) continue;
        while(s[l]==d2&&l<r) c2++,l++;
        while(s[r]==d2&&l<r) c2++,r--;
        if(s[l]!=s[r]) {
          c2=INF;
          break;
        }
      }
      cout<<(min(c1,c2)==INF?-1:min(c1,c2))<<endl;
    }
  }
  return 0;
}

