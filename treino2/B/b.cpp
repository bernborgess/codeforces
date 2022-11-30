#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll area(ll a, ll b,ll c,ll d,ll e,ll f);

int main(){ _
	
	ll n;	cin>>n;
	pair<ll,ll> p[n];
	for(ll i=0;i<n;i++)	cin>>p[i].f>>p[i].s;
	
	ll a,b,c;
	ll min = LINF;
	for(a=0;a<n;a++){
		for(b=a+1;b<n;b++){
			for(c=b+1;c<n;c++){
				if((area(p[a].f,p[a].s,p[b].f,p[b].s,p[c].f,p[c].s))<min)	min = area(p[a].f,p[a].s,p[b].f,p[b].s,p[c].f,p[c].s);
				else if(area(p[a].f,p[a].s,p[b].f,p[b].s,p[c].f,p[c].s)> 4*min) break;
			}
		}
	}
	cout<<min<<endl;
	
	return 0;
}

ll area(ll a, ll b,ll c,ll d,ll e,ll f){
	return abs( (a*d+b*e+c*f)-(e*d+a*f+c*b) );
}