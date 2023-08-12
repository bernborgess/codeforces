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
  int groups[4] = {0,0,0,0};
  int n; cin>>n;
  for(int i=0;i<n;i++) {
    int temp; cin>>temp; groups[temp-1]++;
  }
  int taxis = 0;
  // ? Taxis of 4
  taxis+=groups[4-1];
  groups[4-1]=0;
  // ? Taxis of 3+1
  taxis+=groups[3-1];
  groups[1-1]=max(groups[1-1]-groups[3-1],0);
  groups[3-1]=0; 
  // ? Taxis of 2+2
  taxis+=groups[2-1]/2;
  groups[2-1]%=2;
  // ? Taxis of 2+1+1
  if(groups[2-1]) {
    taxis++; groups[2-1]=0; groups[1-1]=max(0,groups[1-1]-2);
  }
  // ? Taxis of 1+1+1+1
  taxis+=ceil(groups[1-1]/4.0);
  cout<<taxis<<endl;
  return 0;
}

