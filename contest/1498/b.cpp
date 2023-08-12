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
	int t; cin>>t;
	int n,W,l,h,active;
	multiset<int> w;
	while(t--) {
		cin>>n>>W;	
		w.clear();	h=0;	active = n;
		for(int i=0;i<n;i++) {
			int temp;	cin>>temp;
			w.insert(temp);
		}
		
		h=0;	l=W;
		while(!w.empty()) {
			auto temp = w.lower_bound(W+1);
			l-=*temp;
			
		}
	}
	return 0;
}

