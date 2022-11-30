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
	int t,k,n; cin>>t;
	string str;
	int l,r;
	bool poss;
	while(t--){
		cin>>n>>k;
		cin>>str;

		if(k==((n+1)/2)) poss=false;
		else {
			l=0;	r=n-1;
			poss=true;
			while(r-l>n-2*k-1){
				if(str[l]!=str[r])	poss=false;
				l++;	r--;
			}
		}

		cout<<(poss?"YES":"NO")<<endl;
	}
	
	return 0;
}