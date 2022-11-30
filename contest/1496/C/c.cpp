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
	cout<<setprecision(15)<<fixed;
	int t; cin>>t;
	int n;
	ll x,y;
	double glauber;
	vector<ll> miners;
	vector<ll> diamonds;
	while(t--){
		cin>>n;
		miners.resize(0);	diamonds.resize(0);	glauber=0.0;
		for(int i=0;i<2*n;i++) {
			cin>>x>>y;
			if(x) 	diamonds.push_back(x*x);
			else	miners.push_back(y*y);
		}
		sort(diamonds.begin(), diamonds.end() );
		sort(miners.begin(), miners.end());

		for(int i=0;i<n;i++) {
			glauber += sqrt( (diamonds[i]+miners[i])	);
		}
		cout<< glauber <<endl;
	}	
	return 0;
}