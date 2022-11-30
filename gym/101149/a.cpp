#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ 
	
	int n; cin>>n;
	int max = -INF;
	for(int i=0;i<n;i++){
		int num;	cin>>num;
		if(num>max)	max=num;
	}
	cout<<max<<endl;
	
	return 0;
}