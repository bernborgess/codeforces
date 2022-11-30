#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	
	int k; cin>>k;
	
	vector<int> month(12,0);
	for(int i=0;i<12;i++){
		cin>>month[i];
	}
	sort(month.begin(),month.end(),greater<>());
	
	int grow=0, water=0;
	for(int i=0;i<12;i++){
		if(grow>=k)	break;
		grow+=month[i];
		water++;
	}
	if(grow<k)	cout<<"-1\n";
	else	cout<<water<<endl;
	return 0;
}