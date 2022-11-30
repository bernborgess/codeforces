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
	
	string k, aux, init;
	int q=0,m=0,n=0,l=0,o=0;	cin>>q;
	char dummy=0;
	for(int i=0;i<q;i++){
		cin>>k>>m;
		for(int j=0;j<m;j++){
			for(l=k.size();l>=0;l--)	if('5'<=k[l]&&k[l]<='9')	break;
			if(l<0)	l=0;
			init.erase();
			for(o=0;o<l;o++)	init.push_back(k[o]);	
			aux.erase();
			for(o=l;o<k.size();o++){
				if('5'<=k[o]&&k[o]<='9')	aux.push_back('1');
				if('0'<=k[o]&&k[o]<='9'){
					dummy = k[o]-'0';
					dummy *=2;
					dummy %=10;
					dummy +='0';
					aux.push_back(dummy);
				}
			}
			k=init+aux;
		}
		cout<<k<<endl;
	}
	
	
	return 0;
}