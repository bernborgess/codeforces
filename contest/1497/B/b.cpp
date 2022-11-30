#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	int t; cin>>t;
	int n,m,el,ans;
	map<int,int> a;


	while(t--) {
		cin>>n>>m;	a.clear();
		for(int i=0;i<m;i++) {
			a.insert({i,0});
		}
		for(int i=0;i<n;i++){
			cin>>el;	a[el%m]++;
		}
		
		ans=0;
		if(a[0]) {
			ans++;
		}	

		for(int i=1;i<=floor(m/2);i++) {
			if(a[i]&&a[m-i]) {
				ans++;
				int sobra = (max(a[i],a[m-i])-min(a[i],a[m-i])	);
				if(sobra>=2)	{
					ans+=sobra-1;
				}
			}
			else {
				ans+=a[i];
				ans+=a[m-i];
			}
		}
		cout<<ans<<endl;
	}	
	return 0;
}