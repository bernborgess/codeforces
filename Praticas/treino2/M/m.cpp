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
	
	string a,b,c;	cin>>a>>b>>c;
	string out = a;
	int len = a.size();
	
	bool Amb = 0, Imp = 0;
	for(int i=0;i<len;i++){
		if(c[i]==b[i]){
			out[i]=c[i];
			if(c[i]==a[i])	Amb=1;
		}
		else{
			if(c[i]!=a[i]&&b[i]!=a[i])	Imp = 1;
		}
	}
	
	if(Imp)			cout<<"Impossible\n";
	else if(Amb)	cout<<"Ambiguous\n";
	else			cout<<out<<endl;	
	
	return 0;
}