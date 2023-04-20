#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	int n; cin>>n;
	string name[n];
	vector<pair<int,int>> love(n,{0,0});// qtd, nome
	for(int i=0;i<n;i++){
		cin>>name[i];
		love[i].s = i;
	}
	int m,from=-1,to=-1;	cin>>m;
	for(int i=0;i<m;i++){
		cin>>from>>to;
		from--,to--;
		love[from].f=love[to].f + 1;
		love[from].s=to;		
	}
	for(int i=0;i<love[0].f;i++){
		cout<<"I_love_";
	}
	cout<<name[love[0].s]<<endl;
	
	return 0;
}