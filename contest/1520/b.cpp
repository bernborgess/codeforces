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



int main() { _
	int t;	cin>>t;
	string integer,symetric;;
	ll counter;
	int len,numb,symb;
	while(t--) {
		cin>>integer; counter=0; symetric=integer;
		len = (int)integer.size();
		for(int i=0;i<len;i++) {symetric[i]=integer[0];}
		counter+=9*(len-1);
		numb = stoi(integer);
		symb = stoi(symetric);
		counter+=integer[0]-48-(numb<symb);
		cout<<counter<<endl;
	}
	return 0;
}

