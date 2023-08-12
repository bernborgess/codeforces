#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
#define pii pair<int,int>

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool cmp(pii a,pii b) {
	return (a.fst-a.snd)>(b.fst-b.snd);
}

int main() { _
	ll n,m;	cin>>n>>m;
	vector<pii> musics;
	for(ll i=0;i<n;i++) {
		ll a,b;	cin>>a>>b;
		musics.pb({a,b});
	}
	sort(musics.begin(),musics.end(),cmp);
	ll sum = 0;
	for(int i=0;i<n;i++) {
		sum+=musics[i].fst;
	}
	ll ans =0;
	for(int i=0;i<n;i++) {
		if(sum<=m) {
			break;
		}
		sum-=musics[i].fst;
		sum+=musics[i].snd;
		ans++;
	}
	if(sum<=m)	cout<<ans<<endl;
	else		cout<<-1<<endl;
	return 0;
}

