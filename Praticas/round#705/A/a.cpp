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
	
	int t;	cin>>t;
	int n,k,m;
	while(t--) {
		m=0;
		cin>>n>>k;

		m+=n-k;
		m+=(k/2);
		cout<<m<<endl;
		for(int i=ceil(k/2.0);i<k;i++){
			cout<<i<<" ";
		}
		for(int i=k+1;i<=n;i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}