#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int order(vector<int> v);

int main() { _
	int t;	cin>>t;
	int n;
	vector<int> deck;
	// vector<int> out;

	while(t--) {
		cin>>n;
		deck.resize(n);
		int fim=n;
		for (int register i=0;i<n;i++) {
			cin>>deck[i];
		}
		while(fim>0) {
			int maxEl = 0, maxI, atualSize=fim;
			for (int j=0;j<atualSize;j++) {
				if(deck[j]>maxEl){
					maxEl = deck[j];
					maxI = j;
				}	
			}

			for (int j=maxI;j<atualSize;j++) {
				cout<<deck[j]<<" ";
				fim--;
			}
		}
		cout<<endl;
	}	
		
	return 0;
}
