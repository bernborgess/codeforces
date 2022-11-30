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



int main() { _
	int t;	cin>>t;
	int n;
	ll count;
	vector<int> a;
	while(t--) {
		cin>>n;	count=0;
		a.resize(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++) for(int j=i+1;j<n;j++) if(a[j]-a[i]==j-i) count++;
		cout<<count<<endl;
	}
	return 0;
}

