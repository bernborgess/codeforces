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

int main(){ _
	int t; cin>>t;
	int n,el;
	set<int> a;
	multiset<int> rep;
	while(t--) {
		cin>>n; a.clear(); rep.clear();
		for(int i=0;i<n;i++){
			cin>>el;	
			if(find(a.begin(),a.end(),el)==a.end())	
				a.insert(el); 
			else 
				rep.insert(el);
		}
		// sort(a.begin(),a.end());	sort(rep.begin(), rep.end() );
		for(auto x : a ) 	cout<<x<<" ";
		for(auto x : rep)	cout<<x<<" ";
		cout<<endl;
	}	
	return 0;
}