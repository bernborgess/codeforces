#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e5+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
int origin=-1;
bool cycle=false;

void dfs(int v){
    vis[v] = true;
    for(auto w: g[v]) {
        if(!vis[w]) {
            dfs(w);
        } else if(w==origin) {
            if(find(g[origin].begin(), g[origin].end(), v) == g[origin].end()) {
                cycle=true;
            }
        }
    }
}

int main() { _
    int n,m,z;    cin>>n>>m;    z=m;
    int u,v;
    while(z--) {
        cin>>u>>v;  u--,v--;
        g[u].pb(v);
        g[v].pb(u);
    }

/*  for(int i=0;i<=m;i++) {
        cout<<"g["<<i<<"] - ";
        for(auto x : g[i]) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;   */

    int min=0, ccc=0;
    while(min<m) {
        while(vis[min]) {
            min++;
        }
        cycle=false;
        origin=min;
cout<<"MIN:"<<min<<endl;
        dfs(origin);
        if(cycle) ccc++;
    }
    cout<<ccc<<endl;    
    return 0;
}

