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
	string input;
	cin>>input;
	string fib = "AABCEHMU";
	string found;
	for(char c : input ) {
		if(fib.find(c)!=string::npos) {
			found.pb(c);
		}
	}
	sort(found.begin(),found.end());
	if(found.size()<2) {
		cout<<"NO"<<endl; return 0;
	}	
	for(int i=0;i<found.size()-1;i++) {
		if(fib.find((found[i]+found[i+1]))==string::npos) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}

