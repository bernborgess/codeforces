#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))	cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}