#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool compPossivel(vector<int> COLOR, int VL, int VF);

int main(){ _
	
	string deck;
	cin>>deck;
	
	int Rcount=0,Gcount=0,Bcount=0;
	int Rf=-1,Rl=-1,Gf=-1,Gl=-1,Bf=-1,Bl=-1;
	vector<int> R;
	vector<int> G;
	vector<int> B;
	for(int i=0; i<deck.size(); i++){
		if(deck[i]=='R'){
			R.push_back(i);
			if(Rf==-1)	Rf=i;
			Rl=i;
		}
		else if(deck[i]=='G'){
			G.push_back(i);
			if(Gf==-1)	Gf=i;
			Gl=i;
		}
		else if(deck[i]=='B'){
			B.push_back(i);
			if(Bf==-1)	Bf=i;
			Bl=i;
		}
	}
	if(!(R.size()&&G.size()&&B.size()))	cout<<"YES\n";
	else if(compPossivel(G,Rl,Bf)||compPossivel(G,Bl,Rf)||compPossivel(R,Gl,Bf)||compPossivel(R,Bl,Gf)||compPossivel(B,Gl,Rf)||compPossivel(B,Rl,Gf))	cout<<"YES\n";
	else	cout<<"NO\n";	
	
	return 0;
}

bool compPossivel(vector<int> COLOR, int VL, int VF){
	bool ok = 1;
	for(int i=0;i<COLOR.size();i++){
		if(COLOR[i]<VL && COLOR[i]>VF)	ok = 0;
	}
	return ok;
}