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
	
	ll a,b;	cin>>a>>b;
	ll dist=0;
	
	int iterar=1;
	if(a-b)	dist+=a-b;
	while(a-iterar*b>b){
		dist+=a-iterar*b;
		if(a-iterar*b<b)	break;
		dist+=a-iterar*b;
		iterar++;
	}
	
	//dist = k*c+(k-1)*b+h*c+h;
	cout<<dist<<endl;
	
	return 0;
}