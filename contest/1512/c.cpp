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
	int t;	cin>>t;
	int a,b,n;
	int ones,zeros;
	set<int> unset;
	string str;
	bool fail;
	while(t--) {
		cin>>a>>b;	n=a+b,ones=0,zeros=0;
		cin>>str;	fail=false;	unset.clear();
		if(a%2&&b%2)	fail = true;
		if(!fail)
		for(int i=0;i<n;i++) {
			if(str[i]!='?') {
				if(str[n-i-1]=='?') {
					str[n-i-1] = str[i];
				}	
				else if(str[i]!=str[n-i-1]) {
					fail = true;
				}
				if(str[i]=='0')	zeros+=1;
				if(str[i]=='1')	ones +=1;
			} else if(str[n-i-1]=='?')	{
				unset.insert(min(i,n-i-1)); 
			} else {
				str[i] = str[n-i-1];
				if(str[i]=='0')	zeros ++;
				if(str[i]=='1')	ones ++;
			}
		}
		if(zeros>a || ones>b) fail=true;
		if(!fail) for(auto x : unset ) {
			if(zeros+(1+(x!=n-x-1))<=a) {
				str[x] = '0',str[n-x-1] = '0', zeros += 1+(x!=n-x-1);
			} else if(ones+(1+(x!=n-x-1))<=b) {
				str[x] = '1',str[n-x-1] = '1', ones += 1+(x!=n-x-1);
			} else {
				fail = true;
			}
		}
		if(fail) 	cout<<-1<<endl;
		else if(zeros!=a || ones != b) cout<< -1 <<endl;
		else 		cout<<str<<endl;

	}
	return 0;
}

