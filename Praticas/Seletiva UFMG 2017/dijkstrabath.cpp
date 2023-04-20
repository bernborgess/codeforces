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
//graph
vector<vector<pii>> graph(MAX);

//friends
vector<int> friends;

int n,m,x;

vector<int> dijkstra(int src) {
  vector<int> distance(n,INF);
  priority_queue<pii> pq;// {cost,node}, sugestion of cost for this node
  pq.push({0,src});
  while(!pq.empty()) {
    auto [cost,node] = pq.top(); cost*=-1;
    pq.pop();
    if(distance[node]<=cost) continue; //? no help
    distance[node] = cost;
    for(auto [viz,mov] : graph[node]) {
      if(distance[viz]>mov+cost) {
        pq.push({-(cost+mov),viz});
      }
    }
  }
  return distance;
}

int main() { _
  cin>>n>>m>>x;
  for(int i=0;i<m;i++) {
    int u,v,w; cin>>u>>v>>w; u--,v--;
    graph[u].pb({v,w});
    graph[v].pb({u,w});
  }
  //!forgotten
  friends.resize(x);

  for(int& el : friends) {cin>>el;el--;}
  vector<int> start = dijkstra(0);
  vector<int> ender = dijkstra(n-1);
  int ans = INF;
  for(int i:friends) ans=min(ans,start[i]+ender[i]);
  cout<<ans<<endl;
  return 0;
}

