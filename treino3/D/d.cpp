#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
#define HAPPINESS 9

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	
	int n;
	ll x;	cin>>n>>x;
	vector<int> jump(n);
	for(int i=0; i<n;i++){
		cin>>jump[i];
		if(jump[i]==1||x%jump[i]==0){
			cout<<"YES\n";
			return 0;
		}
	}
	sort(jump.begin(),jump.end());
	
	
	for(int i=0;i<n-1;i++){
		if(jump[i+1]-jump[i]==1||x%jump[i+1]-jump[i]==0){
			cout<<"YES\n";	return 0;
		}
		jump[i] =  jump[i+1]-jump[i];
	}
		
	cout<<"NO\n";
	
	return 0;
}