#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vti;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e5+10;
vector<vector<pii>> graph(MAX);
vti friends;
int n,m,x; 

vti dijkstra(int u) {
  vti distance(n,INF);
  priority_queue<pii> q;
  q.push({0,u});
  while(!q.empty()) {
    auto [cost,node] = q.top(); q.pop(); cost*=-1;
    if(distance[node]<=cost) continue;
    distance[node] = cost;
    for(auto [viz,mov] : graph[node]) {
      if(distance[viz] > mov+cost) {
        q.push({-(mov+cost),viz});
      }
    }
  }
  return distance;
}

int main() { _
  cin>>n>>m>>x;
  for(int i=0;i<m;i++) {
    int u,v,w;  cin>>u>>v>>w;
    u--,v--;
    graph[u].pb({v,w});
    graph[v].pb({u,w});
  }
  friends.resize(x);
  for(int& el : friends) {
    cin>>el; el--;
  }
  vti start = dijkstra(0);
  vti ender = dijkstra(n-1);
  int ans = INF;
  for(int f : friends) ans=min(ans,start[f]+ender[f]);
  cout<<ans<<endl;  
  return 0;
}

