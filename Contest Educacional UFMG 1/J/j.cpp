#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int opera(int n, int m);

int main(){ _
	
	int n,m;	cin>>n>>m;
	vector<int> a(n);	for(int i=0;i<n;i++)	cin>>a[i];
	int counter=0;
	bool crescente=1;
	for(int i=0; i<n-1; i++)	if(a[i]>a[i+1])	crescente=0;
	while(!crescente){
		crescente=1;
		counter++;
		for(int i=0; i<n-1; i++){
			if(a[i]>a[i+1]){
				if((a[i]+1)%m<=a[i+1]) a[i]=(a[i]+1)%m;
				else if((a[i+1]+1)%m>=a[i])	a[i+1]=(a[i+1]+1)%m;
			}
			if(a[i]>a[i+1])	crescente=0;
		}
	}
	cout<<counter<<endl;
	
	return 0;
}
