#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int matriz[110][110];

int main() { _
	int t;	cin>>t;
	int n, now;
	while(t--) {
		cin>>n;
		if(n==1)	cout<<1<<endl;
		else if(n==2)	cout<<-1<<endl;
		else if(n==3) {
			cout<<"2 9 7"<<endl;
			cout<<"4 6 3"<<endl;
			cout<<"1 8 5"<<endl;
		} else if(n%2==0) {
			now = 1;
			for(int j=0;j<n;j++) for(int i=0;i<n;i+=2) {
				matriz[i][j]=now;
				now++;
			}
			for(int j=0;j<n;j++) for(int i=1;i<n;i+=2) {
				matriz[i][j]=now;
				now++;
			}
			for(int i=0;i<n;i++) {
				for(int j=0;j<n;j++) {
					cout<<matriz[i][j]<<" ";
				}
				cout<<endl;
			}

		} else if(n%2==1){
			now = 1;
			for(int j=0;j<n;j++) for(int i=0;i<n-1;i+=2) {
				matriz[i][j]=now;
				now++;
			}
			for(int j=0;j<n;j++) for(int i=1;i<n-1;i+=2) {
				matriz[i][j]=now;
				now++;
			}
			
			for(int j=0;j<n;j++) matriz[n-1][j]=-1;

			for(int j=0;j<n;j+=2){	matriz[n-1][j]=now; now++; }
			for(int j=1;j<n;j+=2){	matriz[n-1][j]=now; now++; }


			for(int i=0;i<n;i++) {
				for(int j=0;j<n;j++) {
					cout<<matriz[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}

