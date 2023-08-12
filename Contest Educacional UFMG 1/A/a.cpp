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
	
	ll n,m,k,l,a=0;	cin>>n>>m>>k>>l;
	
	while(a*m-k<l){
		a++;
		if(a*m>n)	break;
	}
	if(a*m-k>=l && a*m<=n)	cout<<a<<endl;	
	else					cout<<"-1\n";	
	
	
	
	return 0;
}