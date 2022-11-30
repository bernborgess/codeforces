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
};


set<int> col;
int uniq=0,ncount=0,maxx=0,mex=0;

int main(){ _
	int t;	cin>>t;
	int n,k,z;
	while(t--){
		uniq=0,ncount=0,maxx=0,mex=0;
		col.clear();	
		uniq=0,ncount=0;	
		cin>>n>>k;
		int l,r,m;
		for (int i=0;i<n;i++)	{
			cin>>z;	
			col.insert(z);
			if(z>maxx)	maxx=z;
			if(z==mex)	{
				while(col.find(mex)!=col.end()){
					mex++;
				}
			}
		}
		while(k--){
			z=ceil((maxx+mex)/2.0);
			col.insert(z);
			if(z>maxx)	maxx=z;
			if(z==mex)	{
				while(col.find(mex)!=col.end()){
					mex++;
				}
			}
		}
		cout<<col.size()<<endl;
	}	
	return 0;
}

