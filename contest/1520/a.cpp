#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



int main() { _
	int t;	cin>>t;
	int n;
	bool busted;
	string days;
	set<int> task;
	while(t--) {
		cin>>n;	task.clear();
		cin>>days;	busted=false;
		for(int i=0;i<n;i++) {
			if(task.count((int)days[i])!=0) {
				if(days[i-1]==days[i]) continue;
				busted=true;
			} else {
				task.insert((int)days[i]);
			}
		}
		cout<<(busted?"NO":"YES")<<endl;
	}
	return 0;
}

