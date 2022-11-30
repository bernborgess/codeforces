#include <iostream>
using namespace std;
typedef long long ll;

const int MAX = 1e4+10;
int b[MAX];
int l[MAX];

int gcd(int a,int b) {
  if(b==0) return a;
  return gcd(b,a%b);
}

int main() {
  int t; cin>>t;
  while(t--) {
    int n; cin>>n;
    bool ok=true;
    // SOLUTION EXISTS IFF
    // for all i,j, i!=j : gcd(b[i],b[j]) | (l[i]-l[j])
    for(int i=0;i<n;i++) {
      cin>>b[i]>>l[i];
      if(l[i]>=b[i]) {
        ok=false;
        break;
      }
    } 
    if(!ok) { cout<<"LIAR"<<endl; continue; }

    for(int i=0;i<n;i++) {
      for(int j=i+1;j<n;j++) {
        if(abs(l[i]-l[j])%gcd(b[i],b[j])) {
          ok=false;
          break;
        }
      }
      if(!ok) break;
    }
    cout<<(ok?"HONEST":"LIAR")<<endl;
  }
  return 0;
}


