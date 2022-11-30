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
	
	string s,p,op;	cin>>s;
	ll q;	cin>>q;
	char c;
	bool in=0;
	for(int i=0;i<q;i++){
		cin>>op>>c;
		if(op=="push"){
			p += c;
		}
		if(op=="pop"){
			p.pop_back();
		}
		
	}
	
	
	return 0;
}