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
	
	int n;		cin>>n;
	ll A[n+1][n+1], B[n+1][n+1], C[n+1][n+1];
	for(int j=1;j<=n;j++)	for(int i=1;i<=n;i++)	cin>>A[j][i];
	for(int j=1;j<=n;j++)	for(int i=1;i<=n;i++)	cin>>B[j][i];
	ll number=0;
	
	for(int j=1;j<=n;j++)	for(int i=1;i<=n;i++){
		cin>>C[j][i];
		number = 0;
		for(int k=1;k<=n;k++){
			number += A[j][k]*B[k][i];
			number%=1000000007;
		}
		if(number!=C[j][i]){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	
	
	return 0;
}