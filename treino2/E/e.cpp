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
	
	string s,t,ds,dt;
	int ss=0,es=0,size=0;
	cin>>s;
	
	cin>>t;
	
	for(int i=0;i<s.size();i++){
		if(s[i]!=t[i]){
			ss=i;
			break;
		}
	}
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!=t[i]){
			es=i;
			break;
		}
	}
	
	bool possible = 1;
	
	if(es>0){
		for(int i=ss;i<=es;i++){
			ds=ds+s[i];
			dt=dt+t[i];
		}
		size = ds.size();
		
		for(int i=0;i<size;i++){
			if(ds[i]!=dt[size-i-1]){
				possible = 0;
				break;
			}
		}
	}
	
	if(possible)	cout<<"YES\n";
	else			cout<<"NO\n";
	
	
	return 0;
}