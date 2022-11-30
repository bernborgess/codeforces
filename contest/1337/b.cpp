#include<iostream>
using namespace std;

int voidAbsorption(int x) {
	return x/2+10;
}

int lightningStrike(int x) {
	return x-10;
}
// 1 69117 21 2
int main() {
	int t,x,n,m; cin>>t;
	bool win;
	while(t--) {
		cin>>x>>n>>m;
		win=true;
		while(x>0) {
			if(n&&voidAbsorption(x)<x) {
				x=voidAbsorption(x);
				n--;
			} else if(m) {
				x=lightningStrike(x);
				m--;
			} else {
				win=false;
				break;
			}
		}
		cout<<(win?"YES":"NO")<<endl;
	}
	return 0;
}