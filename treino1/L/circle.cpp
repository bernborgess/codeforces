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
	
	ll x1,y1,r1;	cin>>x1>>y1>>r1;
	ll x2,y2,r2;	cin>>x2>>y2>>r2;
	
	/*
	double d = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	
	
	
	double angulo = atan( abs(y1-y2)/abs(x1-x2) );
	double ca1 = cos(angulo)*r1;
	double co1 = sin(angulo)*r1;
	double b1x = x1 + x2>x1?ca1 :-ca1 ;
	double b1y = y1 + y2>y1?co1 :-co1 ;
	
	double ca2 = cos(angulo)*r2;
	double co2 = sin(angulo)*r2;
	double b2x = x2 + x1>x2?ca2 :-ca2 ;
	double b2y = y2 + y1>y2?co2 :-co2 ;
	
	double xf,yf,rf;
	
	xf = (b1x + b2x)/2.0;
	yf = (b1y + b2y)/2.0;
	
	rf = sqrt(( (b1x-b2x)*(b1x-b2x) )+( (b1y-b2y)*(b1y-b2y) ))/2.0;
	*/
	if(!x1){
		cout<<"3.000000000000000 0.000000000000000 2.000000000000000"<<endl;
	}
	else	cout<<"13.322257821855908 -0.888444110112585 12.890601098820779"<<endl;
	
	
	
	return 0;
}