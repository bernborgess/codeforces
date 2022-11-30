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

const int MAX = 2e5+10;
vector<int> a(MAX);
vector<int> r;
vector<int> b;
vector<bool> rb(MAX);

int main() { _
  int n,t; cin>>t;
  char clr;
  bool impossible;
  while(t--) {
    cin>>n; impossible=false; r.resize(0),b.resize(0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
      cin>>clr; rb[i]=(clr=='R');
      if(rb[i]&&a[i]>n) impossible=true;
      if(!rb[i]&&a[i]<1)impossible=true;
      if(rb[i]) r.pb(min(n,n-a[i]+1));
      if(!rb[i])b.pb(min(n,a[i]));
    }
    if(impossible) {
      cout<<"NO"<<endl;
      continue;
    }
    sort(r.begin(),r.end());
    int usedR=0;
    for(int i=0;i<r.size();i++) {
      if(r[i]-usedR<=0) {
        impossible=true;
        break;
      } 
      usedR++;
    }
    if(impossible) {
      cout<<"NO"<<endl;
      continue;
    }
    sort(b.begin(),b.end());
    int usedB=0;
    for(int i=0;i<b.size();i++) {
      if(b[i]-usedB<=0) {
        impossible=true;
        break;
      } 
      usedB++;
    }
    cout<<(impossible?"NO":"YES")<<endl;
  }
  return 0;
}

