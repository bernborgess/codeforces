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
	int t; cin>>t;
	int n,k;
	while(t--) {
		cin>>n>>k;
		if(n%2==1) {
			cout<<n/2<<" "<<n/2<<" "<<1<<endl;
		}
		else if(n%4==0) {
			cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
		}
		else if(n%4==2) {
			cout<<2<<" "<<(n/2)-1<<" "<<(n/2)-1<<endl;
		}

	}	
	return 0;
}