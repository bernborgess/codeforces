#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	int t,n,k;	cin>>t;
	string str;
	set<pair<char,int>> abc;
	for (char ch='a'; ch<='z'; ch++ ) {
		abc.insert({ch,0});
	}

	while(t--) {
		cin>>n>>k;
		cin>>str;

		



	}	
	return 0;
}


void resetAbc(set<pair<char,int>>* arg) {
	for (auto el : *arg ) {
		el.s=0;
	}
}