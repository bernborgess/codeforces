#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[n],b[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}	
	int q;
	cin>>q;
	
	for(int i=0;i<q;i++){
		for(int f=0;f<n;f++){
			b[f]=a[f];
		}
		int l, r, v;
		cin>>l>>r>>v;
		for(int j=l-1;j<r-1;j++){
			b[j]+=v;
		}
		
		int esq=0, dir=n-1;
		while(esq<dir){
			b[esq+1]=b[esq+1]-b[esq];
			esq++;
		}
		cout<<b[dir]<<endl;
		
	}
	
	
	return 0;
}