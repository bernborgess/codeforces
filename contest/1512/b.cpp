#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define sc second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



int main() { _
	int t;	cin>>t;
	int n;
	pair<int,int> p,q,r,s;
	while(t--) {
		cin>>n;	p={-1,-1},q={-1,-1};
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				char c;	cin>>c;
				if(c=='*') {
					if(p.f==-1)	p={i,j};
					else		q={i,j};	
				}
			}
		}
		if(p.f==q.f||p.sc==q.sc) {
			if(p.f==q.f) {
				r = {(p.f+1)%n,p.sc};
				s = {(q.f+1)%n,q.sc};
			} else {
				r = {p.f,(p.sc+1)%n};
				s = {q.f,(q.sc+1)%n};

			}
		} else {
			r = {p.f,q.sc};
			s = {q.f,p.sc};
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(p.f==i&&p.sc==j)	cout<<"*";
				else if(q.f==i&&q.sc==j)	cout<<"*";
				else if(r.f==i&&r.sc==j)	cout<<"*";
				else if(s.f==i&&s.sc==j)	cout<<"*";
				else						cout<<".";
			}
			cout<<endl;
		}
	}
	return 0;
}

