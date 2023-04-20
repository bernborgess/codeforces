#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
	
	int n;	cin>>n;
	vector<pair<int,int>>	creature(n);
	int bigA=0,bigAi=-1,bigH=0,bigHi=-1;	//[HEALTH,ATTACK]
	for(int i=0;i<n;i++){
		cin>>creature[i].s>>creature[i].f;
		if(creature[i].s>bigA){
			bigA=creature[i].s;
			bigAi=i;
		}
	}
	sort(creature.begin(),creature.end());
	for(int i=n-1;i>=0;i--){
		if((creature[i].f<=bigA)&&(i!=bigAi)){
			bigH=creature[i].f;
			bigHi=i;
		}
	}
	if(bigHi==-1)	cout<<"0\n";
	else{
		cout<<creature[bigA].s+creature[bigH].s<<endl;
		cout<<bigA<<" "<<bigH<<endl;
	}
	
	return 0;
}