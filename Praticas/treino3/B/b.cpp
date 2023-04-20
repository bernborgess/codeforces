#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
#define HAPPINESS 9

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	
	string str;	cin>>str;
	int count=0,here1=-1,here2=-1;
	string happiness = "happiness";
	bool ok=0;
	size_t found = str.find("happiness");
	
	
	if (found!=string::npos){
		count++;
		here1 = found;
	}
	found = str.find("happiness",found+1,9);
	if (found!=string::npos){
		count++;
		here2 = found;
	}
	found = str.find("happiness",found+1,9);
	if (found!=string::npos){
		count++;
	}
	
	
	if(count>=3)	cout<<"NO\n";
	else{
		cout<<"count = "<<count<<endl;
		cout<<"YES\n";
		if(count==1){
			if(str[0]!='h'){
				cout<<"1 "<<here1<<endl;
			}
			else cout<<"1 "<<here1+1<<endl;
		}
		else{
			cout<<here1<<" "<<here2+1<<endl;
		}
	}	
	
	
	return 0;
}