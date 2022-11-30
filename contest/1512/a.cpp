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



int main() { _
	int n,t;	cin>>t;
	int a,b,c,rep,uniq;
	bool found;
	while(t--) {
		cin>>n;
		found = false;
		cin>>a;//1
		cin>>b;//2
		if(a==b) {	// descobrimos o repetidor
			rep=a;
		} else {		// descobrimos o unico
			cin>>c;//3
			if(a==c)		cout<<2<<endl;
			else if(b==c)	cout<<1<<endl;
			found = true;
		}
		for(int i=3+found;i<=n;i++) {
			cin>>c;	if(c!=rep&&!found) {
				cout<<i<<endl;
			}
		}
	}
	return 0;
}

