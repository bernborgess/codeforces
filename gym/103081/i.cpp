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

const int MAX_SIZE = 1e5+10;

vector<vector<int>> mail(MAX_SIZE);
vector<int> dist(MAX_SIZE,-1);

int bfs(int i) {
  queue<pair<int,int>> q; // node, dist
  dist[i] = 0;
  q.push({i,0});
  int max_dist = 0;
  while(!q.empty()) {
    auto [v,d] = q.front();  
    q.pop();
    for(auto k : mail[v]) if(dist[k]<0) {
      q.push({k,d+1});
      dist[k] = d+1;
      max_dist = max(max_dist,d+1);
    }
  }
  return max_dist;
}

int n,m;
int main() { _
	cin>>n>>m;
  for(int i=0;i<m;i++) {
    int a,b;  cin>>a>>b;  a--,b--;
    mail[a].pb(b);
    mail[b].pb(a);
  }

  int E = bfs(0);
  bool connect = true;
  for(int i=0;i<n;i++) if(dist[i]==-1) {
    connect = false;
    break;
  }
  if(!connect) {
    cout<<-1<<endl;
    return 0;
  }
  dist.assign(MAX_SIZE,-1);
  int ans = bfs(E);
  cout<<ans-1<<endl;

	return 0;
}
