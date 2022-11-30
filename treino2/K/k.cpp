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
	
	ll n,m;	cin>>n>>m;
	
	ll a[n];	for(ll i=0;i<n;i++)	cin>>a[i];
	
	ll c=0,d=0,x=0;
	for(c=0;c<=n;c++){
		x=c;
		for(ll i=0;i<n;i++){
			if(d>=a[i])	d++;
			else if(x>0){	//convencer
				x--;
				d++;
			}
		}
		if(d>=m)	break;
	}
	if(c<n)	cout<<c<<endl;
	else cout<<n<<endl;
	return 0;
}