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
	int t;	cin>>t;
	ll p,a,b,c;

	while(t--){
		cin>>p>>a>>b>>c;
		if(	(!(p%a))||(!(p%b))||(!(p%c))	)	cout<<"0"<<endl;

		else	cout<< min({(a-p%a),(b-p%b),(c-p%c)}) <<endl;

	}	

	return 0;
}




