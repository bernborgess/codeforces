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
	
	ll n,k;	cin>>n>>k;
	ll a[n];	for(ll i=0;i<n;i++)	cin>>a[i];
	
	ll underp=0;
	
	for(ll i=0;i<=n-k;i++){
		//cout<<"Check from "<<i<<" to "<<i+k-1<<endl;
		for(ll j=0;j<k/2;j++){
			//cout<<"Compare "<<a[i+j]<<" a("<<i+j<<") to "<<a[i+k-1-j]<<" a("<<i+k-1-j<<")\n";
			underp+= abs(a[i+j]-a[i+k-1-j]);
		}
	}
	cout<<underp<<endl;
	
	return 0;
}