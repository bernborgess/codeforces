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

ll rect (ll ii, ll jj) {
    if (jj < 0 || ii >= m) return 1;
    char c = grid[ii][jj];
    cout << c << " " << jj << " " << ii << endl;
    if (DP[ii][jj] != -1) return DP[ii][jj];
    if (c == 'B') return DP[ii][jj] = rect(ii+1, jj);
    if (c == 'R') return DP[ii][jj] = rect(ii, jj-1);
    return DP[ii][jj] = rect(ii+1, jj) + rect(ii, jj-1);
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
    int ir = r.fst, jr = r.snd;
    for(int i=ir;i<m;i++) 
      for(int j=jr;j<n;j++) 
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

  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
          cout << grid[i][j];
      }
      cout << endl;
  }

  memset(DP, -1, sizeof(DP));
  cout << rect(0, n-1) << endl;
  // cout << grid[5][0] << endl;

  // for(int i=0;i<m;i++) {
  //   for(int j=0;j<n;j++) cout<<grid[i][j]<<" ";
  //   cout<<endl;
  // }
  

  return 0;
}