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

const int MAX = 110;
vector<bool> field(MAX);

int main() { _
	int n,m;	cin>>n>>m;
	for(int i=0;i<n;i++) {
		int l,r;	cin>>l>>r;
		for(int j=l;j<=r;j++) 
			field[j] = true;
		
	}
	int count=0;
	for(int i=1;i<=m;i++) if(!field[i]) count++;
	cout<<count<<endl;
	for(int i=1;i<=m;i++) if(!field[i]) cout<<i<<" ";
	cout<<endl;
	return 0;
}

