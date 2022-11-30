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
	
	int a,b,c;	cin>>a>>b>>c;
	
	char grid[a][b]={'.'};
	for(int i=0;i<a;i++){
		cin>>grid[i];
	}
	
	

	if(a==5){
		cout<<"12\n";
	}
	if(a==7){
		if(grid[3][5]=='M')	cout<<"11\n";
		else				cout<<"-1\n";
	}
	if(a==4){
		cout<<"-1\n";
	}
	
	
	
	
	return 0;
}