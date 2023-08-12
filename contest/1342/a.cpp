#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() { _
	long long t,x,y,a,b; cin>>t;
	while(t--) {
		cin>>x>>y>>a>>b;
		if(x>y) swap(x,y);
		cout<<(y-x)*a+x*min(2*a,b)<<endl;
	}
	return 0;
}