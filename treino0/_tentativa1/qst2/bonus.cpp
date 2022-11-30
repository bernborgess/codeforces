#include <iostream>

using namespace std;

int main(){
	//input
	int n,t;
	cin>>n>>t;
	int x[n];
	bool field[t+t+2] = {false};
	for(int i=0;i<n;i++){
		cin>>x[i];
		if(0<=x[i]+t&&x[i]+t<=t+t+1){
			field[x[i]+t] = true;
		}
	}	
	for(int i=0;i<t+t+2;i++){
		if(i==t)	cout<<"<";
		cout<<field[i];
		if(i==t)	cout<<">";
	}
	cout<<endl;
	
	int l=0,sl=0,p=t,b=0,sr=0,r=2*t;
	while(t>0){
		for(int i=l;i<=p;i++)	if(field[i])	sl++;
		for(int i=p;i<=r;i++)	if(field[i])	sr++;
		if(sl>sr){//go left
			cout<<"GO LEFT - "<<t<<"=t "<<b<<"$\n";
			p--;
			if(field[p]){	b++;	field[p]=false;	}
			t--;
			r--;
		}
		else{//go right
			cout<<"GO right - "<<t<<"=t\n";
			p++;
			if(field[p]){	b++;	field[p]=false;	}
			t--;
			l--;
		}
			sl=0;
			sr=0;
			
	}
	cout<<b<<endl;
	
	
	return 0;
}