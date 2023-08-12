#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

class Colection {
public:
	int n=0;
	int u=0;
	map<int,int> ss;
	void in(int z){
		n++;
		auto el = this->ss.find(z);
		if(el == this->ss.end() ) {
			this->ss.insert({z,1});
			u++;
		}
		else {
			el->second ++;
		}
	}
	int max() {
		return (this->ss.end())->first;
	}
	int mex() {
		int i=0;
		for(i=0;i<=this->max();i++){
			auto item = this->ss.find(i);
			if(item == ss.end()){
				return i;
			}
		}
		return ++i;
	}
	void drop() {
		this->ss.clear();
		this->n=0;
		this->u=0;
	}
};

int main(){ _
	int t;	cin>>t;
	int n,k,z;
	Colection col;
	while(t--){
		cin>>n>>k;
		for (int i=0;i<n;i++)	{
			cin>>z;	col.in(z);
		}
		while(k--){
			col.in(	ceil((col.max()+col.mex())/2.0)		);
		}
		cout<<col.u<<endl;
		col.drop();
	}	
	return 0;
}

