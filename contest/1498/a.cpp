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



ll sumD(ll a);
int main() { _
	int t;	cin>>t;
	ll n;
	while(t--) {
		cin>>n;
		while(__gcd(n,sumD(n))<=1) {
			n++;
		}
		cout<<n<<endl;
	}	
	return 0;
}

ll sumD(ll a) {
	auto str = to_string(a);
	ll out = 0;
	for(char c : str ) {
		out += c-'0';
	}
	return out;
}