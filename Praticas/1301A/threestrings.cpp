#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	
	int t; cin>>t;
	
	for(int i=0;i<t;i++){
		
		string a,b,c;
		cin>>a>>b>>c;
		bool ok=1;
		
		for(int j=0;j<a.size();j++){
			if((a[j]!=c[j])&&(b[j]!=c[j])){
				ok=0;
			}				
		}
		cout<< (ok?"YES":"NO") << endl;
	}
	return 0;
}