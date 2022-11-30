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

set<int> s;


int main() { _
	freopen("task.in", "r", stdin);
	int t,n,op,maxN;	cin>>t;
	while(t--) {
		cin>>n;
		s.clear();
		op = 0;
		for(int i=0;i<n;i++) {
			int k;
			cin>>k;
			if(k>maxN) maxN=k;
			if(s.count(k))	op+=2;
			else			s.insert(k);
		} 
		cout<<op<<endl;
	}
	return 0;
}

