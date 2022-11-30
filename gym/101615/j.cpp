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

int m,n;  
char grid[32][32];

ll DP[32][32];

ll rect (ll x, ll y) {
    if (DP[x][y] != -1) return DP[x][y];
    if (x == 0 || y == 0) return 1;
    DP[x][y] = 0;
    for (ll i = 0; i <= y; i++) {
        DP[x][y] += rect(x-1, y-i); 
    }
    return DP[x][y];
}

int main() { _
  cin>>m>>n;
  vector<pii> red,blue;
  for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++) {
      cin>>grid[i][j];
      if(grid[i][j]=='B') blue.pb({i,j});
      if(grid[i][j]=='R') red.pb({i,j});
    }
  }

  // check se possivel
  for(auto r : red) {
    // check se tem blue abaixo ou na direita
    for(int i=r.fst;i<m;i++) 
      for(int j=r.snd;j<n;j++) 
        if(grid[i][j]=='B') {
          cout<<0<<endl;
          return 0;
        }
  }

  for(auto b : blue) {
    for(int i=0;i<=b.fst;i++) {
      for(int j=0;j<=b.snd;j++) {
        if(grid[i][j]=='.') grid[i][j]='B';
      }
    }
  }

  for(auto r : red) {
   for(int i=r.fst;i<m;i++) 
      for(int j=r.snd;j<n;j++) 
        if(grid[i][j]=='.') grid[i][j]='R';
  }

  ll ans = 0;

  int si,sj,ii,ij;

  memset(DP, -1, sizeof(DP));
  cout << rect(30,30) << endl;

  for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++) cout<<grid[i][j]<<" ";
    cout<<endl;
  }
  

  return 0;
}

