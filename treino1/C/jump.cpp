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
	int p;
	ll n,in=1;	cin>>p>>n;
	bool visit[p]={0};
	visit[0] = 1;
	ll location = 0;
	for(ll i=1;i<=n;i++){
		location+=i;
		location%=p;
		if(!visit[location]){
			visit[location] =1;
			in++;
		}
		if(in==p)	break;
	}
	cout<<in<<endl;
	return 0;
}