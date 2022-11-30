#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)	cin>>a[i];
	int t=0,tI=0;
	for(int i=0;i<n;i++){
		t+=a[i];
		if(t<0)	break;
	}
	if(t<0){
		do{
			tI++;
			t=tI;
			for(int i=0;i<n;i++){
				t+=a[i];
				if(t<0)	break;
			}
			
		} while(t<0);
	}	
	else if(t>0){
		do{
			tI--;
			t=tI;
			for(int i=0;i<n;i++){
				t+=a[i];
				if(t<0)	break;
			}
		} while(t>1);
	}
	
	cout<<tI<<endl;
	
	return 0;
}