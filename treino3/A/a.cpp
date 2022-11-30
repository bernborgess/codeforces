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
	int n;	cin>>n;
	vector<pair<int,int>> enter(n,{0,0});
	string piece;
	for(int i=0;i<n;i++){
		cin>>piece;
		for(int j=0;j<piece.size();j++){
			if(piece[j]=='(')		enter[i].f++;
			else if(piece[j]==')')	enter[i].s++;
		}
	}
	ll in=0, out=0;
	for(int i=0;i<n;i++){
		in += 	enter[i].f;
		out += 	enter[i].s;
	}
	
	if(in!=out)	cout<<"NO\n";
	
	else{
		cout<<"YES\n";
		pair<int,int> max={-1,-1};	//max, indice
		for(int j=0;j<n;j++){
			for(int i=0;i<n;i++){
				if(enter[i].f > max.f){
					max.f = enter[i].f;
					max.s = i;
				}
			}
			cout<<max.s+1<<" ";
			enter[max.s].f = -1; 
			max.f=-1;
		}
		cout<<endl;
	}
	
	return 0;
}