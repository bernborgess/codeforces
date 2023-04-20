#include<bits/stdc++.h>
 
using namespace std;
 
int main (){
	//input
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)	cin>>a[i];
	
	int g=0,k=1,pos=0;
	
	
	while(pos<n)
	{
		if(a[pos]>k)
		{
			g+=(a[pos]-k);
			k++;
		}		
		pos++;
	}
	cout<<g<<endl;
	
	
	return 0; 
}



