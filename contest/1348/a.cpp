#include<iostream>
using namespace std;


int main() {
	int t,n,a,b; cin>>t;
	while(t--) {
		cin>>n;
		a=0,b=0;
		a+=(1<<n);
		for(int i=n-1;i>=n/2;b+=(1<<i),i--);
		for(int i=1;i<n/2;a+=(1<<i),i++);
		cout<<abs(a-b)<<endl;
	}
	return 0;
}